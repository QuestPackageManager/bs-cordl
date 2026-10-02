#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_impl.hpp"
#include "UnityEngine/TextCore/zzzz__NativeTextGenerationSettings_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCacheEntry_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandlePermanentCache_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandleTemporaryCache_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags::TextHandle_TextHandleFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags::TextHandle_TextHandleFlags() {}
constexpr ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags UnityEngine::TextCore::Text::TextHandle_TextHandleFlags::IsCachedPermanentTextCore{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags UnityEngine::TextCore::Text::TextHandle_TextHandleFlags::IsCachedPermanentATG{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle___c::*)()>(&::UnityEngine::TextCore::Text::TextHandle___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7063814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle___c._InitThreadArrays_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextGenerationSettings* (::UnityEngine::TextCore::Text::TextHandle___c::*)()>(
    &::UnityEngine::TextCore::Text::TextHandle___c::_InitThreadArrays_b__3_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7063818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<InitThreadArrays>b__3_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle___c._InitThreadArrays_b__3_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextGenerator* (::UnityEngine::TextCore::Text::TextHandle___c::*)()>(
    &::UnityEngine::TextCore::Text::TextHandle___c::_InitThreadArrays_b__3_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x70638ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<InitThreadArrays>b__3_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle___c._InitThreadArrays_b__3_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextInfo* (::UnityEngine::TextCore::Text::TextHandle___c::*)()>(
    &::UnityEngine::TextCore::Text::TextHandle___c::_InitThreadArrays_b__3_2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x7063904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<InitThreadArrays>b__3_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle___c._get_settingsArray_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextGenerationSettings* (::UnityEngine::TextCore::Text::TextHandle___c::*)()>(
    &::UnityEngine::TextCore::Text::TextHandle___c::_get_settingsArray_b__6_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7063af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<get_settingsArray>b__6_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle___c._get_generators_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextGenerator* (::UnityEngine::TextCore::Text::TextHandle___c::*)()>(
    &::UnityEngine::TextCore::Text::TextHandle___c::_get_generators_b__9_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x7063b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<get_generators>b__9_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle___c._get_textInfosCommon_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextInfo* (::UnityEngine::TextCore::Text::TextHandle___c::*)()>(
    &::UnityEngine::TextCore::Text::TextHandle___c::_get_textInfosCommon_b__12_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x7063be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<get_textInfosCommon>b__12_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextHandle___c::setStaticF___9(::UnityEngine::TextCore::Text::TextHandle___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::TextHandle___c*, "<>9", ::UnityEngine::TextCore::Text::TextHandle___c*>(
      std::forward<::UnityEngine::TextCore::Text::TextHandle___c*>(value));
}
inline ::UnityEngine::TextCore::Text::TextHandle___c* UnityEngine::TextCore::Text::TextHandle___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::TextHandle___c*, "<>9", ::UnityEngine::TextCore::Text::TextHandle___c*>();
}
inline void UnityEngine::TextCore::Text::TextHandle___c::setStaticF___9__3_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*, "<>9__3_0", ::UnityEngine::TextCore::Text::TextHandle___c*>(
      std::forward<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*>(value));
}
inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* UnityEngine::TextCore::Text::TextHandle___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*, "<>9__3_0", ::UnityEngine::TextCore::Text::TextHandle___c*>();
}
inline void UnityEngine::TextCore::Text::TextHandle___c::setStaticF___9__3_1(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>*, "<>9__3_1", ::UnityEngine::TextCore::Text::TextHandle___c*>(
      std::forward<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>*>(value));
}
inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* UnityEngine::TextCore::Text::TextHandle___c::getStaticF___9__3_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>*, "<>9__3_1", ::UnityEngine::TextCore::Text::TextHandle___c*>();
}
inline void UnityEngine::TextCore::Text::TextHandle___c::setStaticF___9__3_2(::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>*, "<>9__3_2", ::UnityEngine::TextCore::Text::TextHandle___c*>(
      std::forward<::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>*>(value));
}
inline ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* UnityEngine::TextCore::Text::TextHandle___c::getStaticF___9__3_2() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>*, "<>9__3_2", ::UnityEngine::TextCore::Text::TextHandle___c*>();
}
inline void UnityEngine::TextCore::Text::TextHandle___c::setStaticF___9__6_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*, "<>9__6_0", ::UnityEngine::TextCore::Text::TextHandle___c*>(
      std::forward<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*>(value));
}
inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* UnityEngine::TextCore::Text::TextHandle___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*, "<>9__6_0", ::UnityEngine::TextCore::Text::TextHandle___c*>();
}
inline void UnityEngine::TextCore::Text::TextHandle___c::setStaticF___9__9_0(::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>*, "<>9__9_0", ::UnityEngine::TextCore::Text::TextHandle___c*>(
      std::forward<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>*>(value));
}
inline ::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>* UnityEngine::TextCore::Text::TextHandle___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextGenerator*>*, "<>9__9_0", ::UnityEngine::TextCore::Text::TextHandle___c*>();
}
inline void UnityEngine::TextCore::Text::TextHandle___c::setStaticF___9__12_0(::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>*, "<>9__12_0", ::UnityEngine::TextCore::Text::TextHandle___c*>(
      std::forward<::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>*>(value));
}
inline ::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>* UnityEngine::TextCore::Text::TextHandle___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::TextCore::Text::TextInfo*>*, "<>9__12_0", ::UnityEngine::TextCore::Text::TextHandle___c*>();
}
inline void UnityEngine::TextCore::Text::TextHandle___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextGenerationSettings* UnityEngine::TextCore::Text::TextHandle___c::_InitThreadArrays_b__3_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<InitThreadArrays>b__3_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextGenerationSettings*>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextGenerator* UnityEngine::TextCore::Text::TextHandle___c::_InitThreadArrays_b__3_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<InitThreadArrays>b__3_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextGenerator*>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextInfo* UnityEngine::TextCore::Text::TextHandle___c::_InitThreadArrays_b__3_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<InitThreadArrays>b__3_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextInfo*>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextGenerationSettings* UnityEngine::TextCore::Text::TextHandle___c::_get_settingsArray_b__6_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<get_settingsArray>b__6_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextGenerationSettings*>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextGenerator* UnityEngine::TextCore::Text::TextHandle___c::_get_generators_b__9_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<get_generators>b__9_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextGenerator*>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextInfo* UnityEngine::TextCore::Text::TextHandle___c::_get_textInfosCommon_b__12_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle___c*>(), { "<get_textInfosCommon>b__12_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextInfo*>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextHandle___c* UnityEngine::TextCore::Text::TextHandle___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextHandle___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextHandle___c::TextHandle___c() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::Finalize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7060448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.InitThreadArrays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::TextHandle::InitThreadArrays)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x7060538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "InitThreadArrays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_settingsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*> (*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_settingsArray)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x7060884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_settingsArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_generators
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*> (*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_generators)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x7060a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_generators", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_textInfosCommon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TextCore::Text::TextInfo*> (*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_textInfosCommon)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x7060b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_textInfosCommon", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_textInfoCommon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextInfo* (*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_textInfoCommon)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x7060cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_textInfoCommon", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_generator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextGenerator* (*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_generator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x7060d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_generator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextGenerationSettings* (*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_settings)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x7060e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_settings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_preferredSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_preferredSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x7060ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_preferredSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.PixelsToPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::TextHandle::*)(float_t)>(&::UnityEngine::TextCore::Text::TextHandle::PixelsToPoints)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x7060f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "PixelsToPoints", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.PointsToPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextHandle::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::TextCore::Text::TextHandle::PointsToPixels)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x7060f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "PointsToPixels", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.PixelsToPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextHandle::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::TextCore::Text::TextHandle::PixelsToPoints)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x7060efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "PixelsToPoints", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetPixelsPerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::GetPixelsPerPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7060f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_textGenerationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_textGenerationInfo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x7060f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_textGenerationInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.set_textGenerationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(::System::IntPtr)>(&::UnityEngine::TextCore::Text::TextHandle::set_textGenerationInfo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x7061114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "set_textGenerationInfo", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_TextInfoNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* (
    ::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_TextInfoNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70611f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_TextInfoNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.set_TextInfoNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(
    ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*)>(&::UnityEngine::TextCore::Text::TextHandle::set_TextInfoNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70611fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                { "set_TextInfoNode", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_IsCachedPermanent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_IsCachedPermanent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7061204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_IsCachedPermanent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_IsCachedPermanentATG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_IsCachedPermanentATG)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7061084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_IsCachedPermanentATG", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.set_IsCachedPermanentATG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(bool)>(&::UnityEngine::TextCore::Text::TextHandle::set_IsCachedPermanentATG)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x7061214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "set_IsCachedPermanentATG", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_IsCachedPermanentTextCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_IsCachedPermanentTextCore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x7061230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_IsCachedPermanentTextCore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.set_IsCachedPermanentTextCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(bool)>(&::UnityEngine::TextCore::Text::TextHandle::set_IsCachedPermanentTextCore)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x70613e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "set_IsCachedPermanentTextCore", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_IsCachedTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_IsCachedTemporary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70613fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_IsCachedTemporary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.set_IsCachedTemporary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(bool)>(&::UnityEngine::TextCore::Text::TextHandle::set_IsCachedTemporary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7061404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "set_IsCachedTemporary", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_useAdvancedText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_useAdvancedText)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x706140c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_useAdvancedText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_characterCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_characterCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x7061418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_characterCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.AddToPermanentCacheAndGenerateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::AddToPermanentCacheAndGenerateMesh)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x7061570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.AddTextInfoToTemporaryCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::AddTextInfoToTemporaryCache)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x706163c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "AddTextInfoToTemporaryCache", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.RemoveFromTemporaryCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::RemoveFromTemporaryCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x70604a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "RemoveFromTemporaryCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.RemoveFromPermanentCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::RemoveFromPermanentCache)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x7060518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "RemoveFromPermanentCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.RemoveFromPermanentCacheTextCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::RemoveFromPermanentCacheTextCore)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x70616e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "RemoveFromPermanentCacheTextCore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.RemoveFromPermanentCacheATG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::RemoveFromPermanentCacheATG)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7061750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.UpdateCurrentFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::TextHandle::UpdateCurrentFrame)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x70617bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "UpdateCurrentFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_textInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextInfo* (::UnityEngine::TextCore::Text::TextHandle::*)()>(
    &::UnityEngine::TextCore::Text::TextHandle::get_textInfo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x7061490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_textInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.SetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::SetDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7061844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.IsDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::IsDirty)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7061850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "IsDirty", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.get_IsPlaceholder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::get_IsPlaceholder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x706188c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.UpdatePreferredValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(
    &::UnityEngine::TextCore::Text::TextHandle::UpdatePreferredValues)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x7061894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                             { "UpdatePreferredValues", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextInfo* (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::Update)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x7061920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.UpdateWithHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextInfo* (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::TextHandle::UpdateWithHash)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x7061a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "UpdateWithHash", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.PrepareFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::PrepareFontAsset)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x7061c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "PrepareFontAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.UpdatePreferredSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::UpdatePreferredSize)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x7061dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "UpdatePreferredSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.ConvertPixelUnitsToTextCoreRelativeUnits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, ::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::TextHandle::ConvertPixelUnitsToTextCoreRelativeUnits)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x7061ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                { "ConvertPixelUnitsToTextCoreRelativeUnits", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetLineHeightDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(&::UnityEngine::TextCore::Text::TextHandle::GetLineHeightDefault)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x7061bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                             { "GetLineHeightDefault", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetCursorPositionFromStringIndexUsingCharacterHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t, bool)>(
    &::UnityEngine::TextCore::Text::TextHandle::GetCursorPositionFromStringIndexUsingCharacterHeight)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x7062024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetCursorPositionFromStringIndexUsingLineHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t, bool, bool)>(
    &::UnityEngine::TextCore::Text::TextHandle::GetCursorPositionFromStringIndexUsingLineHeight)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x70620d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                { "GetCursorPositionFromStringIndexUsingLineHeight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetHighlightRectangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rect> (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t, int32_t)>(
    &::UnityEngine::TextCore::Text::TextHandle::GetHighlightRectangles)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x7062198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetHighlightRectangles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetCursorIndexFromPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(::UnityEngine::Vector2, bool)>(
    &::UnityEngine::TextCore::Text::TextHandle::GetCursorIndexFromPosition)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x7062348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                             { "GetCursorIndexFromPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.LineDownCharacterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::LineDownCharacterPosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x7062410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "LineDownCharacterPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.LineUpCharacterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::LineUpCharacterPosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x7062498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "LineUpCharacterPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.FindIntersectingLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(::UnityEngine::Vector3, bool)>(
    &::UnityEngine::TextCore::Text::TextHandle::FindIntersectingLink)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x7062520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                                                           { "FindIntersectingLink", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetCorrespondingStringIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::GetCorrespondingStringIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x706262c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetCorrespondingStringIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetLineInfoFromCharacterIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::LineInfo (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::TextHandle::GetLineInfoFromCharacterIndex)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x7062684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetLineInfoFromCharacterIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetLineNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::GetLineNumber)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x706277c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetLineNumber", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetLineHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::GetLineHeight)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x7062804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetLineHeight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetLineHeightFromCharacterIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::GetLineHeightFromCharacterIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x70628b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetLineHeightFromCharacterIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetCharacterHeightFromIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::GetCharacterHeightFromIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x7062964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetCharacterHeightFromIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.Substring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t, int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::Substring)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7062a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "Substring", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.PreviousCodePointIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::PreviousCodePointIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x7062a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "PreviousCodePointIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.NextCodePointIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::NextCodePointIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x7062b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "NextCodePointIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetStartOfNextWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::GetStartOfNextWord)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x7062c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetStartOfNextWord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetEndOfPreviousWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::GetEndOfPreviousWord)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x7062d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetEndOfPreviousWord", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetFirstCharacterIndexOnLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::GetFirstCharacterIndexOnLine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7062e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetFirstCharacterIndexOnLine", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.GetLastCharacterIndexOnLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::GetLastCharacterIndexOnLine)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x7062e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetLastCharacterIndexOnLine", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(char16_t, int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::IndexOf)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x7062f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextHandle::*)(char16_t, int32_t)>(&::UnityEngine::TextCore::Text::TextHandle::LastIndexOf)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x7062fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "LastIndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.SelectCurrentWord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::TextHandle::SelectCurrentWord)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x70630b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                             { "SelectCurrentWord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.SelectCurrentParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::TextCore::Text::TextHandle::SelectCurrentParagraph)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x70631a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                             { "SelectCurrentParagraph", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.SelectToPreviousParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(::by_ref<int32_t>)>(&::UnityEngine::TextCore::Text::TextHandle::SelectToPreviousParagraph)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x7063288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "SelectToPreviousParagraph", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.SelectToNextParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(::by_ref<int32_t>)>(&::UnityEngine::TextCore::Text::TextHandle::SelectToNextParagraph)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x7063360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "SelectToNextParagraph", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.SelectToStartOfParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(::by_ref<int32_t>)>(&::UnityEngine::TextCore::Text::TextHandle::SelectToStartOfParagraph)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x7063438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "SelectToStartOfParagraph", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.SelectToEndOfParagraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)(::by_ref<int32_t>)>(&::UnityEngine::TextCore::Text::TextHandle::SelectToEndOfParagraph)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x7063510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "SelectToEndOfParagraph", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.IsAdvancedTextEnabledForElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::IsAdvancedTextEnabledForElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70635e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle.IsMainDirectionRTL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::IsMainDirectionRTL)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x70635f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "IsMainDirectionRTL", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextHandle::*)()>(&::UnityEngine::TextCore::Text::TextHandle::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x70636bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_nativeSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeSettings;
}
constexpr ::UnityEngine::TextCore::NativeTextGenerationSettings const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_nativeSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeSettings;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_nativeSettings(::UnityEngine::TextCore::NativeTextGenerationSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nativeSettings = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_pixelPreferedSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelPreferedSize;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_pixelPreferedSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pixelPreferedSize;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_pixelPreferedSize(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pixelPreferedSize = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_ScreenRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_ScreenRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenRect;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_m_ScreenRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenRect = value;
}
constexpr float_t& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_LineHeightDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineHeightDefault;
}
constexpr float_t const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_LineHeightDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LineHeightDefault;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_m_LineHeightDefault(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LineHeightDefault = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_IsPlaceholder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsPlaceholder;
}
constexpr bool const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_IsPlaceholder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsPlaceholder;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_m_IsPlaceholder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsPlaceholder = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_IsElided() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsElided;
}
constexpr bool const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_IsElided() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsElided;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_m_IsElided(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsElided = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_CreateGenerationIteration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateGenerationIteration;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_CreateGenerationIteration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateGenerationIteration;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_m_CreateGenerationIteration(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreateGenerationIteration = value;
}
constexpr ::System::IntPtr& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_TextGenerationInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextGenerationInfo;
}
constexpr ::System::IntPtr const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_TextGenerationInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextGenerationInfo;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_m_TextGenerationInfo(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextGenerationInfo = value;
}
constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*&
UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get__TextInfoNode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TextInfoNode_k__BackingField;
}
constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* const&
UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get__TextInfoNode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TextInfoNode_k__BackingField;
}
constexpr void
UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set__TextInfoNode_k__BackingField(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TextInfoNode_k__BackingField = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get__IsCachedTemporary_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsCachedTemporary_k__BackingField;
}
constexpr bool const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get__IsCachedTemporary_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsCachedTemporary_k__BackingField;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set__IsCachedTemporary_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsCachedTemporary_k__BackingField = value;
}
constexpr ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_TextHandleFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextHandleFlags;
}
constexpr ::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_TextHandleFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextHandleFlags;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_m_TextHandleFlags(::UnityEngine::TextCore::Text::TextHandle_TextHandleFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextHandleFlags = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_PreviousGenerationSettingsHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousGenerationSettingsHash;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_m_PreviousGenerationSettingsHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousGenerationSettingsHash;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_m_PreviousGenerationSettingsHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousGenerationSettingsHash = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_isDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirty;
}
constexpr bool const& UnityEngine::TextCore::Text::TextHandle::__cordl_internal_get_isDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirty;
}
constexpr void UnityEngine::TextCore::Text::TextHandle::__cordl_internal_set_isDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDirty = value;
}
inline void UnityEngine::TextCore::Text::TextHandle::setStaticF_s_TemporaryCache(::UnityEngine::TextCore::Text::TextHandleTemporaryCache* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*, "s_TemporaryCache", ::UnityEngine::TextCore::Text::TextHandle*>(
      std::forward<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*>(value));
}
inline ::UnityEngine::TextCore::Text::TextHandleTemporaryCache* UnityEngine::TextCore::Text::TextHandle::getStaticF_s_TemporaryCache() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::TextHandleTemporaryCache*, "s_TemporaryCache", ::UnityEngine::TextCore::Text::TextHandle*>();
}
inline void UnityEngine::TextCore::Text::TextHandle::setStaticF_s_PermanentCache(::UnityEngine::TextCore::Text::TextHandlePermanentCache* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::TextHandlePermanentCache*, "s_PermanentCache", ::UnityEngine::TextCore::Text::TextHandle*>(
      std::forward<::UnityEngine::TextCore::Text::TextHandlePermanentCache*>(value));
}
inline ::UnityEngine::TextCore::Text::TextHandlePermanentCache* UnityEngine::TextCore::Text::TextHandle::getStaticF_s_PermanentCache() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::TextHandlePermanentCache*, "s_PermanentCache", ::UnityEngine::TextCore::Text::TextHandle*>();
}
inline void UnityEngine::TextCore::Text::TextHandle::setStaticF_s_Settings(::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*>, "s_Settings", ::UnityEngine::TextCore::Text::TextHandle*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*> UnityEngine::TextCore::Text::TextHandle::getStaticF_s_Settings() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*>, "s_Settings", ::UnityEngine::TextCore::Text::TextHandle*>();
}
inline void UnityEngine::TextCore::Text::TextHandle::setStaticF_s_Generators(::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*>, "s_Generators", ::UnityEngine::TextCore::Text::TextHandle*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*> UnityEngine::TextCore::Text::TextHandle::getStaticF_s_Generators() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*>, "s_Generators", ::UnityEngine::TextCore::Text::TextHandle*>();
}
inline void UnityEngine::TextCore::Text::TextHandle::setStaticF_s_TextInfosCommon(::ArrayW<::UnityEngine::TextCore::Text::TextInfo*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::TextCore::Text::TextInfo*>, "s_TextInfosCommon", ::UnityEngine::TextCore::Text::TextHandle*>(
      std::forward<::ArrayW<::UnityEngine::TextCore::Text::TextInfo*>>(value));
}
inline ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*> UnityEngine::TextCore::Text::TextHandle::getStaticF_s_TextInfosCommon() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::TextCore::Text::TextInfo*>, "s_TextInfosCommon", ::UnityEngine::TextCore::Text::TextHandle*>();
}
inline void UnityEngine::TextCore::Text::TextHandle::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::InitThreadArrays() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "InitThreadArrays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*> UnityEngine::TextCore::Text::TextHandle::get_settingsArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_settingsArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::Text::TextGenerationSettings*>>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*> UnityEngine::TextCore::Text::TextHandle::get_generators() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_generators", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::Text::TextGenerator*>>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TextCore::Text::TextInfo*> UnityEngine::TextCore::Text::TextHandle::get_textInfosCommon() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_textInfosCommon", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TextCore::Text::TextInfo*>>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::TextCore::Text::TextHandle::InitArray(::by_ref<::ArrayW<T>> array, ::System::Func_1<T>* createInstance) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                           { "InitArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<::System::Func_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, createInstance);
}
inline ::UnityEngine::TextCore::Text::TextInfo* UnityEngine::TextCore::Text::TextHandle::get_textInfoCommon() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_textInfoCommon", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextInfo*>(nullptr, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextGenerator* UnityEngine::TextCore::Text::TextHandle::get_generator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_generator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextGenerator*>(nullptr, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextGenerationSettings* UnityEngine::TextCore::Text::TextHandle::get_settings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_settings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextGenerationSettings*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextHandle::get_preferredSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_preferredSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t UnityEngine::TextCore::Text::TextHandle::PixelsToPoints(float_t pixel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "PixelsToPoints", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pixel);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextHandle::PointsToPixels(::UnityEngine::Vector2 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "PointsToPixels", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, point);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextHandle::PixelsToPoints(::UnityEngine::Vector2 pixel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "PixelsToPoints", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, pixel);
}
inline float_t UnityEngine::TextCore::Text::TextHandle::GetPixelsPerPoint() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::TextCore::Text::TextHandle::get_textGenerationInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_textGenerationInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::set_textGenerationInfo(::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "set_textGenerationInfo", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* UnityEngine::TextCore::Text::TextHandle::get_TextInfoNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_TextInfoNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::set_TextInfoNode(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                              { "set_TextInfoNode", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::TextCore::Text::TextCacheEntry>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextHandle::get_IsCachedPermanent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_IsCachedPermanent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::TextHandle::get_IsCachedPermanentATG() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_IsCachedPermanentATG", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::set_IsCachedPermanentATG(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "set_IsCachedPermanentATG", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextHandle::get_IsCachedPermanentTextCore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_IsCachedPermanentTextCore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::set_IsCachedPermanentTextCore(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "set_IsCachedPermanentTextCore", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextHandle::get_IsCachedTemporary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_IsCachedTemporary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::set_IsCachedTemporary(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "set_IsCachedTemporary", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextHandle::get_useAdvancedText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_useAdvancedText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::get_characterCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_characterCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::AddToPermanentCacheAndGenerateMesh() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::AddTextInfoToTemporaryCache(int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "AddTextInfoToTemporaryCache", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashCode);
}
inline void UnityEngine::TextCore::Text::TextHandle::RemoveFromTemporaryCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "RemoveFromTemporaryCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::RemoveFromPermanentCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "RemoveFromPermanentCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::RemoveFromPermanentCacheTextCore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "RemoveFromPermanentCacheTextCore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::RemoveFromPermanentCacheATG() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::UpdateCurrentFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "UpdateCurrentFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextInfo* UnityEngine::TextCore::Text::TextHandle::get_textInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "get_textInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextInfo*>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::SetDirty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::TextHandle::IsDirty(int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "IsDirty", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode);
}
inline bool UnityEngine::TextCore::Text::TextHandle::get_IsPlaceholder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::UpdatePreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings* tgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                           { "UpdatePreferredValues", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tgs);
}
inline ::UnityEngine::TextCore::Text::TextInfo* UnityEngine::TextCore::Text::TextHandle::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextInfo*>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextInfo* UnityEngine::TextCore::Text::TextHandle::UpdateWithHash(int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "UpdateWithHash", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextInfo*>(this, ___internal_method, hashCode);
}
inline bool UnityEngine::TextCore::Text::TextHandle::PrepareFontAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "PrepareFontAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::UpdatePreferredSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "UpdatePreferredSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::TextCore::Text::TextHandle::ConvertPixelUnitsToTextCoreRelativeUnits(float_t fontSize, ::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                              { "ConvertPixelUnitsToTextCoreRelativeUnits", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, fontSize, fontAsset);
}
inline float_t UnityEngine::TextCore::Text::TextHandle::GetLineHeightDefault(::UnityEngine::TextCore::Text::TextGenerationSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                           { "GetLineHeightDefault", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextGenerationSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, settings);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextHandle::GetCursorPositionFromStringIndexUsingCharacterHeight(int32_t index, bool inverseYAxis) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, index, inverseYAxis);
}
inline ::UnityEngine::Vector2 UnityEngine::TextCore::Text::TextHandle::GetCursorPositionFromStringIndexUsingLineHeight(int32_t index, bool useXAdvance, bool inverseYAxis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                           { "GetCursorPositionFromStringIndexUsingLineHeight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, index, useXAdvance, inverseYAxis);
}
inline ::ArrayW<::UnityEngine::Rect> UnityEngine::TextCore::Text::TextHandle::GetHighlightRectangles(int32_t cursorIndex, int32_t selectIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetHighlightRectangles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rect>>(this, ___internal_method, cursorIndex, selectIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::GetCursorIndexFromPosition(::UnityEngine::Vector2 position, bool inverseYAxis) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                                                         { "GetCursorIndexFromPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, position, inverseYAxis);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::LineDownCharacterPosition(int32_t originalLogicalPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "LineDownCharacterPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, originalLogicalPos);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::LineUpCharacterPosition(int32_t originalLogicalPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "LineUpCharacterPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, originalLogicalPos);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::FindIntersectingLink(::UnityEngine::Vector3 position, bool inverseYAxis) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                                                         { "FindIntersectingLink", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, position, inverseYAxis);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::GetCorrespondingStringIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetCorrespondingStringIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline ::UnityEngine::TextCore::Text::LineInfo UnityEngine::TextCore::Text::TextHandle::GetLineInfoFromCharacterIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetLineInfoFromCharacterIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::LineInfo>(this, ___internal_method, index);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::GetLineNumber(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetLineNumber", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline float_t UnityEngine::TextCore::Text::TextHandle::GetLineHeight(int32_t lineNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetLineHeight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, lineNumber);
}
inline float_t UnityEngine::TextCore::Text::TextHandle::GetLineHeightFromCharacterIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetLineHeightFromCharacterIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline float_t UnityEngine::TextCore::Text::TextHandle::GetCharacterHeightFromIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetCharacterHeightFromIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline ::StringW UnityEngine::TextCore::Text::TextHandle::Substring(int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "Substring", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, startIndex, length);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::PreviousCodePointIndex(int32_t currentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "PreviousCodePointIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::NextCodePointIndex(int32_t currentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "NextCodePointIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::GetStartOfNextWord(int32_t currentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetStartOfNextWord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::GetEndOfPreviousWord(int32_t currentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetEndOfPreviousWord", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::GetFirstCharacterIndexOnLine(int32_t currentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetFirstCharacterIndexOnLine", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::GetLastCharacterIndexOnLine(int32_t currentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "GetLastCharacterIndexOnLine", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, currentIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::IndexOf(char16_t value, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "IndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex);
}
inline int32_t UnityEngine::TextCore::Text::TextHandle::LastIndexOf(char16_t value, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "LastIndexOf", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, startIndex);
}
inline void UnityEngine::TextCore::Text::TextHandle::SelectCurrentWord(int32_t index, ::by_ref<int32_t> cursorIndex, ::by_ref<int32_t> selectIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                           { "SelectCurrentWord", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, cursorIndex, selectIndex);
}
inline void UnityEngine::TextCore::Text::TextHandle::SelectCurrentParagraph(::by_ref<int32_t> cursorIndex, ::by_ref<int32_t> selectIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(),
                                                           { "SelectCurrentParagraph", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursorIndex, selectIndex);
}
inline void UnityEngine::TextCore::Text::TextHandle::SelectToPreviousParagraph(::by_ref<int32_t> cursorIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "SelectToPreviousParagraph", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursorIndex);
}
inline void UnityEngine::TextCore::Text::TextHandle::SelectToNextParagraph(::by_ref<int32_t> cursorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "SelectToNextParagraph", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursorIndex);
}
inline void UnityEngine::TextCore::Text::TextHandle::SelectToStartOfParagraph(::by_ref<int32_t> cursorIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "SelectToStartOfParagraph", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursorIndex);
}
inline void UnityEngine::TextCore::Text::TextHandle::SelectToEndOfParagraph(::by_ref<int32_t> cursorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "SelectToEndOfParagraph", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursorIndex);
}
inline bool UnityEngine::TextCore::Text::TextHandle::IsAdvancedTextEnabledForElement() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::TextCore::Text::TextHandle::IsMainDirectionRTL() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { "IsMainDirectionRTL", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextHandle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextHandle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextHandle* UnityEngine::TextCore::Text::TextHandle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::TextHandle*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextHandle::TextHandle() {}
