//  Copyright (C) 2015-2016 Pierre-Olivier Latour <info@pol-online.net>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#import <AppKit/AppKit.h>

IB_DESIGNABLE
@interface GILinkButton : NSControl
@property(nonatomic) NSTextAlignment textAlignment;  // Using @alignment from NSControl doesn't work
@property(nonatomic, strong) NSFont* textFont;  // Using @font from NSControl doesn't work
@property(nonatomic, strong) IBInspectable NSString* link;
@property(nonatomic, strong) IBInspectable NSColor* linkColor;
@property(nonatomic, strong) IBInspectable NSColor* alternateLinkColor;
@end
