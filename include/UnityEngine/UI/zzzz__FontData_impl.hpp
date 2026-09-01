#pragma once
// IWYU pragma private; include "UnityEngine\UI\FontData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__FontStyle_impl.hpp"
#include "UnityEngine/zzzz__HorizontalWrapMode_impl.hpp"
#include "UnityEngine/zzzz__TextAnchor_impl.hpp"
#include "UnityEngine/zzzz__VerticalWrapMode_impl.hpp"
#include "UnityEngine/UI/zzzz__FontData_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__HorizontalWrapMode_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__VerticalWrapMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_defaultFontData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::FontData* (*)()>(&::UnityEngine::UI::FontData::get_defaultFontData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c23400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_defaultFontData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_font
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_font)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_font", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_font
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(::UnityEngine::Font*)>(&::UnityEngine::UI::FontData::set_font)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_font", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_fontSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_fontSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(int32_t)>(&::UnityEngine::UI::FontData::set_fontSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_fontSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_fontStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FontStyle (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_fontStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_fontStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_fontStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(::UnityEngine::FontStyle)>(&::UnityEngine::UI::FontData::set_fontStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_fontStyle", {}, { ::i2c::type_of<::UnityEngine::FontStyle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_bestFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_bestFit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_bestFit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_bestFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(bool)>(&::UnityEngine::UI::FontData::set_bestFit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_bestFit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_minSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_minSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_minSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_minSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(int32_t)>(&::UnityEngine::UI::FontData::set_minSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_minSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_maxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_maxSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_maxSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_maxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(int32_t)>(&::UnityEngine::UI::FontData::set_maxSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_maxSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_alignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextAnchor (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_alignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_alignment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_alignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(::UnityEngine::TextAnchor)>(&::UnityEngine::UI::FontData::set_alignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_alignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_alignByGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_alignByGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c234f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_alignByGeometry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_alignByGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(bool)>(&::UnityEngine::UI::FontData::set_alignByGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_alignByGeometry", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_richText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_richText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_richText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_richText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(bool)>(&::UnityEngine::UI::FontData::set_richText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_richText", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_horizontalOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::HorizontalWrapMode (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_horizontalOverflow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_horizontalOverflow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_horizontalOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(::UnityEngine::HorizontalWrapMode)>(&::UnityEngine::UI::FontData::set_horizontalOverflow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_horizontalOverflow", {}, { ::i2c::type_of<::UnityEngine::HorizontalWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_verticalOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VerticalWrapMode (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_verticalOverflow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_verticalOverflow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_verticalOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(::UnityEngine::VerticalWrapMode)>(&::UnityEngine::UI::FontData::set_verticalOverflow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_verticalOverflow", {}, { ::i2c::type_of<::UnityEngine::VerticalWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.get_lineSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::get_lineSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_lineSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.set_lineSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)(float_t)>(&::UnityEngine::UI::FontData::set_lineSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c23540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_lineSpacing", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c23548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6c2354c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::FontData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::FontData::*)()>(&::UnityEngine::UI::FontData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c23484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Font>& UnityEngine::UI::FontData::__cordl_internal_get_m_Font() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Font;
}
constexpr ::UnityW<::UnityEngine::Font> const& UnityEngine::UI::FontData::__cordl_internal_get_m_Font() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Font;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_Font(::UnityW<::UnityEngine::Font> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Font = value;
}
constexpr int32_t& UnityEngine::UI::FontData::__cordl_internal_get_m_FontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontSize;
}
constexpr int32_t const& UnityEngine::UI::FontData::__cordl_internal_get_m_FontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontSize;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_FontSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontSize = value;
}
constexpr ::UnityEngine::FontStyle& UnityEngine::UI::FontData::__cordl_internal_get_m_FontStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontStyle;
}
constexpr ::UnityEngine::FontStyle const& UnityEngine::UI::FontData::__cordl_internal_get_m_FontStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontStyle;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_FontStyle(::UnityEngine::FontStyle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontStyle = value;
}
constexpr bool& UnityEngine::UI::FontData::__cordl_internal_get_m_BestFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BestFit;
}
constexpr bool const& UnityEngine::UI::FontData::__cordl_internal_get_m_BestFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BestFit;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_BestFit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BestFit = value;
}
constexpr int32_t& UnityEngine::UI::FontData::__cordl_internal_get_m_MinSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinSize;
}
constexpr int32_t const& UnityEngine::UI::FontData::__cordl_internal_get_m_MinSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MinSize;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_MinSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MinSize = value;
}
constexpr int32_t& UnityEngine::UI::FontData::__cordl_internal_get_m_MaxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
constexpr int32_t const& UnityEngine::UI::FontData::__cordl_internal_get_m_MaxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_MaxSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxSize = value;
}
constexpr ::UnityEngine::TextAnchor& UnityEngine::UI::FontData::__cordl_internal_get_m_Alignment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Alignment;
}
constexpr ::UnityEngine::TextAnchor const& UnityEngine::UI::FontData::__cordl_internal_get_m_Alignment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Alignment;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_Alignment(::UnityEngine::TextAnchor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Alignment = value;
}
constexpr bool& UnityEngine::UI::FontData::__cordl_internal_get_m_AlignByGeometry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlignByGeometry;
}
constexpr bool const& UnityEngine::UI::FontData::__cordl_internal_get_m_AlignByGeometry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlignByGeometry;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_AlignByGeometry(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AlignByGeometry = value;
}
constexpr bool& UnityEngine::UI::FontData::__cordl_internal_get_m_RichText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RichText;
}
constexpr bool const& UnityEngine::UI::FontData::__cordl_internal_get_m_RichText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RichText;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_RichText(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RichText = value;
}
constexpr ::UnityEngine::HorizontalWrapMode& UnityEngine::UI::FontData::__cordl_internal_get_m_HorizontalOverflow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalOverflow;
}
constexpr ::UnityEngine::HorizontalWrapMode const& UnityEngine::UI::FontData::__cordl_internal_get_m_HorizontalOverflow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalOverflow;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_HorizontalOverflow(::UnityEngine::HorizontalWrapMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HorizontalOverflow = value;
}
constexpr ::UnityEngine::VerticalWrapMode& UnityEngine::UI::FontData::__cordl_internal_get_m_VerticalOverflow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalOverflow;
}
constexpr ::UnityEngine::VerticalWrapMode const& UnityEngine::UI::FontData::__cordl_internal_get_m_VerticalOverflow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalOverflow;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_VerticalOverflow(::UnityEngine::VerticalWrapMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalOverflow = value;
}
constexpr float_t& UnityEngine::UI::FontData::__cordl_internal_get_m_LineSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineSpacing;
}
constexpr float_t const& UnityEngine::UI::FontData::__cordl_internal_get_m_LineSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineSpacing;
}
constexpr void UnityEngine::UI::FontData::__cordl_internal_set_m_LineSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineSpacing = value;
}
inline ::UnityEngine::UI::FontData* UnityEngine::UI::FontData::get_defaultFontData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_defaultFontData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::FontData*>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::UI::FontData::get_font() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_font", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_font(::UnityEngine::Font* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_font", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::FontData::get_fontSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_fontSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_fontSize(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_fontSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::FontStyle UnityEngine::UI::FontData::get_fontStyle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_fontStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::FontStyle>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_fontStyle(::UnityEngine::FontStyle value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_fontStyle", {}, { ::i2c::type_of<::UnityEngine::FontStyle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::FontData::get_bestFit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_bestFit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_bestFit(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_bestFit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::FontData::get_minSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_minSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_minSize(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_minSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::FontData::get_maxSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_maxSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_maxSize(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_maxSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextAnchor UnityEngine::UI::FontData::get_alignment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_alignment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAnchor>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_alignment(::UnityEngine::TextAnchor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_alignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::FontData::get_alignByGeometry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_alignByGeometry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_alignByGeometry(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_alignByGeometry", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::FontData::get_richText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_richText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_richText(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_richText", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::HorizontalWrapMode UnityEngine::UI::FontData::get_horizontalOverflow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_horizontalOverflow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::HorizontalWrapMode>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_horizontalOverflow(::UnityEngine::HorizontalWrapMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_horizontalOverflow", {}, { ::i2c::type_of<::UnityEngine::HorizontalWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::VerticalWrapMode UnityEngine::UI::FontData::get_verticalOverflow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_verticalOverflow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VerticalWrapMode>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_verticalOverflow(::UnityEngine::VerticalWrapMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_verticalOverflow", {}, { ::i2c::type_of<::UnityEngine::VerticalWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::FontData::get_lineSpacing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "get_lineSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::set_lineSpacing(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "set_lineSpacing", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::FontData::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::FontData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::FontData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::FontData* UnityEngine::UI::FontData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::FontData*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::UI::FontData::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::UI::FontData::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::FontData::FontData() {}
