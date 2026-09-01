#pragma once
// IWYU pragma private; include "UnityEngine\UI\GraphicRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__GraphicRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/Collections/zzzz__IndexedSet_1_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::GraphicRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::GraphicRegistry::*)()>(&::UnityEngine::UI::GraphicRegistry::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x6c28ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRegistry.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::GraphicRegistry* (*)()>(&::UnityEngine::UI::GraphicRegistry::get_instance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c28d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRegistry.RegisterGraphicForCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*)>(&::UnityEngine::UI::GraphicRegistry::RegisterGraphicForCanvas)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6c24c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                             { "RegisterGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRegistry.RegisterRaycastGraphicForCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*)>(&::UnityEngine::UI::GraphicRegistry::RegisterRaycastGraphicForCanvas)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6c24080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                             { "RegisterRaycastGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRegistry.UnregisterGraphicForCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*)>(&::UnityEngine::UI::GraphicRegistry::UnregisterGraphicForCanvas)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6c24868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                             { "UnregisterGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRegistry.UnregisterRaycastGraphicForCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*)>(&::UnityEngine::UI::GraphicRegistry::UnregisterRaycastGraphicForCanvas)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6c23ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                { "UnregisterRaycastGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRegistry.DisableGraphicForCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*)>(&::UnityEngine::UI::GraphicRegistry::DisableGraphicForCanvas)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6c25570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                             { "DisableGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRegistry.DisableRaycastGraphicForCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*)>(&::UnityEngine::UI::GraphicRegistry::DisableRaycastGraphicForCanvas)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6c28dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                             { "DisableRaycastGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRegistry.GetGraphicsForCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::UI::Graphic>>* (*)(::UnityEngine::Canvas*)>(
    &::UnityEngine::UI::GraphicRegistry::GetGraphicsForCanvas)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6c28f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(), { "GetGraphicsForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::GraphicRegistry.GetRaycastableGraphicsForCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::UI::Graphic>>* (*)(::UnityEngine::Canvas*)>(
    &::UnityEngine::UI::GraphicRegistry::GetRaycastableGraphicsForCanvas)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6c28250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(), { "GetRaycastableGraphicsForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>*&
UnityEngine::UI::GraphicRegistry::__cordl_internal_get_m_Graphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Graphics;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>* const&
UnityEngine::UI::GraphicRegistry::__cordl_internal_get_m_Graphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Graphics;
}
constexpr void UnityEngine::UI::GraphicRegistry::__cordl_internal_set_m_Graphics(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Graphics = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>*&
UnityEngine::UI::GraphicRegistry::__cordl_internal_get_m_RaycastableGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastableGraphics;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>* const&
UnityEngine::UI::GraphicRegistry::__cordl_internal_get_m_RaycastableGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastableGraphics;
}
constexpr void UnityEngine::UI::GraphicRegistry::__cordl_internal_set_m_RaycastableGraphics(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastableGraphics = value;
}
inline void UnityEngine::UI::GraphicRegistry::setStaticF_s_Instance(::UnityEngine::UI::GraphicRegistry* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::GraphicRegistry*, "s_Instance", ::UnityEngine::UI::GraphicRegistry*>(std::forward<::UnityEngine::UI::GraphicRegistry*>(value));
}
inline ::UnityEngine::UI::GraphicRegistry* UnityEngine::UI::GraphicRegistry::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::GraphicRegistry*, "s_Instance", ::UnityEngine::UI::GraphicRegistry*>();
}
inline void UnityEngine::UI::GraphicRegistry::setStaticF_s_EmptyList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>*, "s_EmptyList", ::UnityEngine::UI::GraphicRegistry*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* UnityEngine::UI::GraphicRegistry::getStaticF_s_EmptyList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>*, "s_EmptyList", ::UnityEngine::UI::GraphicRegistry*>();
}
inline void UnityEngine::UI::GraphicRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::GraphicRegistry* UnityEngine::UI::GraphicRegistry::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::GraphicRegistry*>(nullptr, ___internal_method);
}
inline void UnityEngine::UI::GraphicRegistry::RegisterGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                           { "RegisterGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, graphic);
}
inline void UnityEngine::UI::GraphicRegistry::RegisterRaycastGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                           { "RegisterRaycastGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, graphic);
}
inline void UnityEngine::UI::GraphicRegistry::UnregisterGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                           { "UnregisterGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, graphic);
}
inline void UnityEngine::UI::GraphicRegistry::UnregisterRaycastGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                           { "UnregisterRaycastGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, graphic);
}
inline void UnityEngine::UI::GraphicRegistry::DisableGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                           { "DisableGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, graphic);
}
inline void UnityEngine::UI::GraphicRegistry::DisableRaycastGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(),
                                                           { "DisableRaycastGraphicForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::UI::Graphic*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, graphic);
}
inline ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::UI::Graphic>>* UnityEngine::UI::GraphicRegistry::GetGraphicsForCanvas(::UnityEngine::Canvas* canvas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(), { "GetGraphicsForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::UI::Graphic>>*>(nullptr, ___internal_method, canvas);
}
inline ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::UI::Graphic>>* UnityEngine::UI::GraphicRegistry::GetRaycastableGraphicsForCanvas(::UnityEngine::Canvas* canvas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::GraphicRegistry*>(), { "GetRaycastableGraphicsForCanvas", {}, { ::i2c::type_of<::UnityEngine::Canvas*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::UI::Graphic>>*>(nullptr, ___internal_method, canvas);
}
inline ::UnityEngine::UI::GraphicRegistry* UnityEngine::UI::GraphicRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::GraphicRegistry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::GraphicRegistry::GraphicRegistry() {}
