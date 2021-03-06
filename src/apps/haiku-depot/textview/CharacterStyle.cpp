/*
 * Copyright 2013, Stephan Aßmus <superstippi@gmx.de>.
 * All rights reserved. Distributed under the terms of the MIT License.
 */

#include "CharacterStyle.h"


CharacterStyle::CharacterStyle()
	:
	fStyleData(new CharacterStyleData(), true)
{
}


CharacterStyle::CharacterStyle(const CharacterStyle& other)
	:
	fStyleData(other.fStyleData)
{
}


CharacterStyle&
CharacterStyle::operator=(const CharacterStyle& other)
{
	if (this == &other)
		return *this;
	
	fStyleData = other.fStyleData;
	return *this;
}


bool
CharacterStyle::operator==(const CharacterStyle& other) const
{
	if (this == &other)
		return true;

	if (fStyleData == other.fStyleData)
		return true;

	if (fStyleData.Get() != NULL && other.fStyleData.Get() != NULL)
		return *fStyleData.Get() == *other.fStyleData.Get();

	return false;
}


bool
CharacterStyle::operator!=(const CharacterStyle& other) const
{
	return !(*this == other);
}


bool
CharacterStyle::SetFont(const BFont& font)
{
	CharacterStyleDataRef data = fStyleData->SetFont(font);
	if (data == fStyleData)
		return data->Font() == font;

	fStyleData = data;
	return true;
}


const BFont&
CharacterStyle::Font() const
{
	return fStyleData->Font();
}


bool
CharacterStyle::SetFontSize(float size)
{
	BFont font(Font());
	font.SetSize(size);
	return SetFont(font);
}


bool
CharacterStyle::SetAscent(float ascent)
{
	CharacterStyleDataRef data = fStyleData->SetAscent(ascent);
	if (data == fStyleData)
		return data->Ascent() == ascent;

	fStyleData = data;
	return true;
}


float
CharacterStyle::Ascent() const
{
	return fStyleData->Ascent();
}


bool
CharacterStyle::SetDescent(float descent)
{
	CharacterStyleDataRef data = fStyleData->SetDescent(descent);
	if (data == fStyleData)
		return data->Descent() == descent;

	fStyleData = data;
	return true;
}


float
CharacterStyle::Descent() const
{
	return fStyleData->Descent();
}


bool
CharacterStyle::SetWidth(float width)
{
	CharacterStyleDataRef data = fStyleData->SetWidth(width);
	if (data == fStyleData)
		return data->Width() == width;

	fStyleData = data;
	return true;
}


float
CharacterStyle::Width() const
{
	return fStyleData->Width();
}


bool
CharacterStyle::SetGlyphSpacing(float spacing)
{
	CharacterStyleDataRef data = fStyleData->SetGlyphSpacing(spacing);
	if (data == fStyleData)
		return data->GlyphSpacing() == spacing;

	fStyleData = data;
	return true;
}


float
CharacterStyle::GlyphSpacing() const
{
	return fStyleData->GlyphSpacing();
}


bool
CharacterStyle::SetForegroundColor(uint8 r, uint8 g, uint8 b, uint8 a)
{
	return SetForegroundColor((rgb_color){ r, g, b, a });
}


bool
CharacterStyle::SetForegroundColor(rgb_color color)
{
	CharacterStyleDataRef data = fStyleData->SetForegroundColor(color);
	if (data == fStyleData)
		return data->ForegroundColor() == color;

	fStyleData = data;
	return true;
}


rgb_color
CharacterStyle::ForegroundColor() const
{
	return fStyleData->ForegroundColor();
}


bool
CharacterStyle::SetBackgroundColor(uint8 r, uint8 g, uint8 b, uint8 a)
{
	return SetBackgroundColor((rgb_color){ r, g, b, a });
}


bool
CharacterStyle::SetBackgroundColor(rgb_color color)
{
	CharacterStyleDataRef data = fStyleData->SetBackgroundColor(color);
	if (data == fStyleData)
		return data->BackgroundColor() == color;

	fStyleData = data;
	return true;
}


rgb_color
CharacterStyle::BackgroundColor() const
{
	return fStyleData->BackgroundColor();
}


bool
CharacterStyle::SetStrikeOutColor(rgb_color color)
{
	CharacterStyleDataRef data = fStyleData->SetStrikeOutColor(color);
	if (data == fStyleData)
		return data->StrikeOutColor() == color;

	fStyleData = data;
	return true;
}


rgb_color
CharacterStyle::StrikeOutColor() const
{
	return fStyleData->StrikeOutColor();
}


bool
CharacterStyle::SetUnderlineColor(rgb_color color)
{
	CharacterStyleDataRef data = fStyleData->SetUnderlineColor(color);
	if (data == fStyleData)
		return data->UnderlineColor() == color;

	fStyleData = data;
	return true;
}


rgb_color
CharacterStyle::UnderlineColor() const
{
	return fStyleData->UnderlineColor();
}


bool
CharacterStyle::SetStrikeOut(uint8 strikeOut)
{
	CharacterStyleDataRef data = fStyleData->SetStrikeOut(strikeOut);
	if (data == fStyleData)
		return data->StrikeOut() == strikeOut;

	fStyleData = data;
	return true;
}


uint8
CharacterStyle::StrikeOut() const
{
	return fStyleData->StrikeOut();
}


bool
CharacterStyle::SetUnderline(uint8 underline)
{
	CharacterStyleDataRef data = fStyleData->SetUnderline(underline);
	if (data == fStyleData)
		return data->Underline() == underline;

	fStyleData = data;
	return true;
}


uint8
CharacterStyle::Underline() const
{
	return fStyleData->Underline();
}


