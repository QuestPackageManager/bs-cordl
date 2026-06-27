#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/TEXTURE_COLOR_SPACE.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE::TEXTURE_COLOR_SPACE(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE::TEXTURE_COLOR_SPACE()   {
}
constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE  LIV::SDK::Unity::TEXTURE_COLOR_SPACE::UNDEFINED{static_cast<uint32_t>(0x0u)};
constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE  LIV::SDK::Unity::TEXTURE_COLOR_SPACE::LINEAR{static_cast<uint32_t>(0x1u)};
constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE  LIV::SDK::Unity::TEXTURE_COLOR_SPACE::SRGB{static_cast<uint32_t>(0x2u)};
