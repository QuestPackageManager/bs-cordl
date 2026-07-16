#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRoomLayout.hpp"
#include "GlobalNamespace/zzzz__OVRRoomLayout_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.IOVRAnchorComponent_OVRRoomLayout__get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRRoomLayout::*)()>(
    &::GlobalNamespace::OVRRoomLayout::IOVRAnchorComponent_OVRRoomLayout__get_Type)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e136a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "IOVRAnchorComponent<OVRRoomLayout>.get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.IOVRAnchorComponent_OVRRoomLayout__get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRRoomLayout::*)()>(&::GlobalNamespace::OVRRoomLayout::IOVRAnchorComponent_OVRRoomLayout__get_Handle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e136fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "IOVRAnchorComponent<OVRRoomLayout>.get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.IOVRAnchorComponent_OVRRoomLayout__FromAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRRoomLayout (::GlobalNamespace::OVRRoomLayout::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRRoomLayout::IOVRAnchorComponent_OVRRoomLayout__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e13754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "IOVRAnchorComponent<OVRRoomLayout>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRRoomLayout::*)()>(&::GlobalNamespace::OVRRoomLayout::get_IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e137ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRRoomLayout::*)()>(&::GlobalNamespace::OVRRoomLayout::get_IsEnabled)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e1384c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.IOVRAnchorComponent_OVRRoomLayout__SetEnabledAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRRoomLayout::*)(bool, double_t)>(
    &::GlobalNamespace::OVRRoomLayout::IOVRAnchorComponent_OVRRoomLayout__SetEnabledAsync)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e13934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                                                             { "IOVRAnchorComponent<OVRRoomLayout>.SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRRoomLayout::*)(::GlobalNamespace::OVRRoomLayout)>(&::GlobalNamespace::OVRRoomLayout::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e13980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRRoomLayout>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRRoomLayout, ::GlobalNamespace::OVRRoomLayout)>(&::GlobalNamespace::OVRRoomLayout::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e139ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRRoomLayout>(), ::i2c::type_of<::GlobalNamespace::OVRRoomLayout>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRRoomLayout, ::GlobalNamespace::OVRRoomLayout)>(&::GlobalNamespace::OVRRoomLayout::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e13a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRRoomLayout>(), ::i2c::type_of<::GlobalNamespace::OVRRoomLayout>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRRoomLayout::*)(::System::Object*)>(&::GlobalNamespace::OVRRoomLayout::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e13ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { ::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRRoomLayout::*)()>(&::GlobalNamespace::OVRRoomLayout::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e13b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { ::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRRoomLayout::*)()>(&::GlobalNamespace::OVRRoomLayout::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e13bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { ::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRRoomLayout::*)()>(&::GlobalNamespace::OVRRoomLayout::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e136f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRRoomLayout::*)()>(&::GlobalNamespace::OVRRoomLayout::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e13c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRoomLayout::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRRoomLayout::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e13784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.FetchLayoutAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRRoomLayout::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(
    &::GlobalNamespace::OVRRoomLayout::FetchLayoutAnchorsAsync)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5e13c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                                                             { "FetchLayoutAnchorsAsync", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.FetchAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (
        ::GlobalNamespace::OVRRoomLayout::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRRoomLayout::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5e13fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                                                             { "FetchAnchorsAsync", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRoomLayout.TryGetRoomLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRRoomLayout::*)(::by_ref<::System::Guid>, ::by_ref<::System::Guid>, ::by_ref<::ArrayW<::System::Guid>>)>(
    &::GlobalNamespace::OVRRoomLayout::TryGetRoomLayout)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5e14324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
            { "TryGetRoomLayout", {}, { ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Guid>>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRRoomLayout::setStaticF_Null(::GlobalNamespace::OVRRoomLayout value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRRoomLayout, "Null", ::GlobalNamespace::OVRRoomLayout>(std::forward<::GlobalNamespace::OVRRoomLayout>(value));
}
inline ::GlobalNamespace::OVRRoomLayout GlobalNamespace::OVRRoomLayout::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRRoomLayout, "Null", ::GlobalNamespace::OVRRoomLayout>();
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRRoomLayout::IOVRAnchorComponent_OVRRoomLayout__get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "IOVRAnchorComponent<OVRRoomLayout>.get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRRoomLayout::IOVRAnchorComponent_OVRRoomLayout__get_Handle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "IOVRAnchorComponent<OVRRoomLayout>.get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRRoomLayout GlobalNamespace::OVRRoomLayout::IOVRAnchorComponent_OVRRoomLayout__FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                                                                                         { "IOVRAnchorComponent<OVRRoomLayout>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRRoomLayout>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRRoomLayout::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRRoomLayout::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRRoomLayout::IOVRAnchorComponent_OVRRoomLayout__SetEnabledAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "IOVRAnchorComponent<OVRRoomLayout>.SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRRoomLayout::Equals(::GlobalNamespace::OVRRoomLayout other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRRoomLayout>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRRoomLayout::op_Equality(::GlobalNamespace::OVRRoomLayout lhs, ::GlobalNamespace::OVRRoomLayout rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRRoomLayout>(), ::i2c::type_of<::GlobalNamespace::OVRRoomLayout>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRRoomLayout::op_Inequality(::GlobalNamespace::OVRRoomLayout lhs, ::GlobalNamespace::OVRRoomLayout rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRRoomLayout>(), ::i2c::type_of<::GlobalNamespace::OVRRoomLayout>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRRoomLayout::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRRoomLayout::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRRoomLayout::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRRoomLayout::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRRoomLayout::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRRoomLayout::_ctor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRRoomLayout::FetchLayoutAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                                                           { "FetchLayoutAnchorsAsync", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRRoomLayout::FetchAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                                                           { "FetchAnchorsAsync", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>>(
      *this, ___internal_method, anchors);
}
inline bool GlobalNamespace::OVRRoomLayout::TryGetRoomLayout(::by_ref<::System::Guid> ceiling, ::by_ref<::System::Guid> floor, ::by_ref<::ArrayW<::System::Guid>> walls) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRRoomLayout>(),
                       { "TryGetRoomLayout", {}, { ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Guid>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ceiling, floor, walls);
}
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>"
constexpr GlobalNamespace::OVRRoomLayout::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>*() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>* GlobalNamespace::OVRRoomLayout::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRRoomLayout_() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>"
constexpr GlobalNamespace::OVRRoomLayout::operator ::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>* GlobalNamespace::OVRRoomLayout::i___System__IEquatable_1___GlobalNamespace__OVRRoomLayout_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRRoomLayout::OVRRoomLayout(uint64_t _Handle_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRoomLayout::OVRRoomLayout() {}
