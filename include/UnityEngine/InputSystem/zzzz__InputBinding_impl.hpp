#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBinding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions::InputBinding_DisplayStringOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions::InputBinding_DisplayStringOptions() {}
constexpr ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions UnityEngine::InputSystem::InputBinding_DisplayStringOptions::DontUseShortDisplayNames{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions UnityEngine::InputSystem::InputBinding_DisplayStringOptions::DontOmitDevice{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions UnityEngine::InputSystem::InputBinding_DisplayStringOptions::DontIncludeInteractions{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions UnityEngine::InputSystem::InputBinding_DisplayStringOptions::IgnoreBindingOverrides{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputBinding_MatchOptions::InputBinding_MatchOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputBinding_MatchOptions::InputBinding_MatchOptions() {}
constexpr ::UnityEngine::InputSystem::InputBinding_MatchOptions UnityEngine::InputSystem::InputBinding_MatchOptions::EmptyGroupMatchesAny{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputBinding_Flags::InputBinding_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputBinding_Flags::InputBinding_Flags() {}
constexpr ::UnityEngine::InputSystem::InputBinding_Flags UnityEngine::InputSystem::InputBinding_Flags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::InputBinding_Flags UnityEngine::InputSystem::InputBinding_Flags::Composite{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::InputBinding_Flags UnityEngine::InputSystem::InputBinding_Flags::PartOfComposite{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding___c::*)()>(&::UnityEngine::InputSystem::InputBinding___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64f147c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding___c._MaskByGroups_b__45_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBinding___c::*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding___c::_MaskByGroups_b__45_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64f1480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding___c*>(), { "<MaskByGroups>b__45_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputBinding___c::setStaticF___9(::UnityEngine::InputSystem::InputBinding___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputBinding___c*, "<>9", ::UnityEngine::InputSystem::InputBinding___c*>(
      std::forward<::UnityEngine::InputSystem::InputBinding___c*>(value));
}
inline ::UnityEngine::InputSystem::InputBinding___c* UnityEngine::InputSystem::InputBinding___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputBinding___c*, "<>9", ::UnityEngine::InputSystem::InputBinding___c*>();
}
inline void UnityEngine::InputSystem::InputBinding___c::setStaticF___9__45_0(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__45_0", ::UnityEngine::InputSystem::InputBinding___c*>(std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* UnityEngine::InputSystem::InputBinding___c::getStaticF___9__45_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__45_0", ::UnityEngine::InputSystem::InputBinding___c*>();
}
inline void UnityEngine::InputSystem::InputBinding___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputBinding___c::_MaskByGroups_b__45_0(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding___c*>(), { "<MaskByGroups>b__45_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::InputBinding___c* UnityEngine::InputSystem::InputBinding___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputBinding___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputBinding___c::InputBinding___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f07e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f07f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_id)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64f07f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputBinding::set_id)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64e5730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_id", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f083c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_path", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding::set_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f0844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_path", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_overridePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_overridePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_overridePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_overridePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding::set_overridePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f0854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_overridePath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_interactions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_interactions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f085c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_interactions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_interactions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding::set_interactions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f0864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_interactions", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_overrideInteractions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_overrideInteractions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f086c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_overrideInteractions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_overrideInteractions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding::set_overrideInteractions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f0874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_overrideInteractions", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_processors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f087c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_processors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_processors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding::set_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f0884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_processors", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_overrideProcessors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_overrideProcessors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f088c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_overrideProcessors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_overrideProcessors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding::set_overrideProcessors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f0894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_overrideProcessors", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_groups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_groups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f089c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_groups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_groups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding::set_groups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f08a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_groups", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_action
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f08ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_action", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_action
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding::set_action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f08b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_action", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_isComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_isComposite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64e5a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_isComposite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_isComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(bool)>(&::UnityEngine::InputSystem::InputBinding::set_isComposite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64e5280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_isComposite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_isPartOfComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_isPartOfComposite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64e7c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_isPartOfComposite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.set_isPartOfComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(bool)>(&::UnityEngine::InputSystem::InputBinding::set_isPartOfComposite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64e7f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_isPartOfComposite", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_hasOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_hasOverrides)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64f08bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_hasOverrides", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::InputBinding::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64f08e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { ".ctor",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                          ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.GetNameOfComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::GetNameOfComposite)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64f0904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "GetNameOfComposite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.GenerateId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::GenerateId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64e52ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "GenerateId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.RemoveOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::RemoveOverrides)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64f0948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "RemoveOverrides", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.MaskByGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputBinding (*)(::StringW)>(&::UnityEngine::InputSystem::InputBinding::MaskByGroup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f0954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "MaskByGroup", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.MaskByGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputBinding (*)(::ArrayW<::StringW>)>(&::UnityEngine::InputSystem::InputBinding::MaskByGroups)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x64f096c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "MaskByGroups", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_effectivePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_effectivePath)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64e92b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_effectivePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_effectiveInteractions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_effectiveInteractions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f0abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_effectiveInteractions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_effectiveProcessors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_effectiveProcessors)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64f0ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_effectiveProcessors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.get_isEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::get_isEmpty)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x64f0aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_isEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBinding::*)(::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputBinding::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x64f0b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBinding::*)(::System::Object*)>(&::UnityEngine::InputSystem::InputBinding::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64f0c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputBinding::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x64e8388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputBinding::op_Inequality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x64f0c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::GetHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x64f0ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)()>(&::UnityEngine::InputSystem::InputBinding::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x64f0dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { ::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.ToDisplayString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)(
    ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputBinding::ToDisplayString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64f0ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(),
                         { "ToDisplayString", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding_DisplayStringOptions>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.ToDisplayString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputBinding::*)(
    ::by_ref<::StringW>, ::by_ref<::StringW>, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputBinding::ToDisplayString)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x64f0efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(),
                                                { "ToDisplayString",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                    ::i2c::type_of<::UnityEngine::InputSystem::InputBinding_DisplayStringOptions>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.TriggersAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBinding::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::InputBinding::TriggersAction)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64e5a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "TriggersAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.Matches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBinding::*)(::UnityEngine::InputSystem::InputBinding)>(
    &::UnityEngine::InputSystem::InputBinding::Matches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64f1320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "Matches", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputBinding.Matches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputBinding::*)(
    ::by_ref<::UnityEngine::InputSystem::InputBinding>, ::UnityEngine::InputSystem::InputBinding_MatchOptions)>(&::UnityEngine::InputSystem::InputBinding::Matches)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x64f1328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(),
                            { "Matches", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBinding>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding_MatchOptions>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::InputBinding::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Guid UnityEngine::InputSystem::InputBinding::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_id(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_id", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_path(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_path", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_overridePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_overridePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_overridePath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_overridePath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_interactions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_interactions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_interactions(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_interactions", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_overrideInteractions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_overrideInteractions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_overrideInteractions(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_overrideInteractions", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_processors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_processors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_processors(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_processors", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_overrideProcessors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_overrideProcessors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_overrideProcessors(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_overrideProcessors", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_groups() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_groups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_groups(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_groups", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_action() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_action", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_action(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_action", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputBinding::get_isComposite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_isComposite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_isComposite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_isComposite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputBinding::get_isPartOfComposite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_isPartOfComposite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::set_isPartOfComposite(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "set_isPartOfComposite", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputBinding::get_hasOverrides() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_hasOverrides", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::_ctor(::StringW path, ::StringW action, ::StringW groups, ::StringW processors, ::StringW interactions, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { ".ctor",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                                        ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path, action, groups, processors, interactions, name);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::GetNameOfComposite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "GetNameOfComposite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::GenerateId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "GenerateId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputBinding::RemoveOverrides() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "RemoveOverrides", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputBinding UnityEngine::InputSystem::InputBinding::MaskByGroup(::StringW group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "MaskByGroup", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding>(nullptr, ___internal_method, group);
}
inline ::UnityEngine::InputSystem::InputBinding UnityEngine::InputSystem::InputBinding::MaskByGroups(::ArrayW<::StringW> groups) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "MaskByGroups", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding>(nullptr, ___internal_method, groups);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_effectivePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_effectivePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_effectiveInteractions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_effectiveInteractions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::get_effectiveProcessors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_effectiveProcessors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputBinding::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "get_isEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputBinding::Equals(::UnityEngine::InputSystem::InputBinding other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::InputBinding::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::InputSystem::InputBinding::op_Equality(::UnityEngine::InputSystem::InputBinding left, ::UnityEngine::InputSystem::InputBinding right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::InputBinding::op_Inequality(::UnityEngine::InputSystem::InputBinding left, ::UnityEngine::InputSystem::InputBinding right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t UnityEngine::InputSystem::InputBinding::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::ToDisplayString(::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(),
                       { "ToDisplayString", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding_DisplayStringOptions>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, options, control);
}
inline ::StringW UnityEngine::InputSystem::InputBinding::ToDisplayString(::by_ref<::StringW> deviceLayoutName, ::by_ref<::StringW> controlPath,
                                                                         ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(),
                                              { "ToDisplayString",
                                                {},
                                                { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                  ::i2c::type_of<::UnityEngine::InputSystem::InputBinding_DisplayStringOptions>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, deviceLayoutName, controlPath, options, control);
}
inline bool UnityEngine::InputSystem::InputBinding::TriggersAction(::UnityEngine::InputSystem::InputAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "TriggersAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, action);
}
inline bool UnityEngine::InputSystem::InputBinding::Matches(::UnityEngine::InputSystem::InputBinding binding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(), { "Matches", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputBinding>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, binding);
}
inline bool UnityEngine::InputSystem::InputBinding::Matches(::by_ref<::UnityEngine::InputSystem::InputBinding> binding, ::UnityEngine::InputSystem::InputBinding_MatchOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBinding>(),
                          { "Matches", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBinding>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputBinding_MatchOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, binding, options);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>"
constexpr UnityEngine::InputSystem::InputBinding::operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::InputBinding::i___System__IEquatable_1___UnityEngine__InputSystem__InputBinding_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Id", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Path", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Interactions", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Processors",
// ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Groups", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Action", ty: "::StringW",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::InputBinding_Flags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverridePath",
// ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverrideInteractions", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverrideProcessors",
// ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputBinding::InputBinding(::StringW m_Name, ::StringW m_Id, ::StringW m_Path, ::StringW m_Interactions, ::StringW m_Processors, ::StringW m_Groups,
                                                                 ::StringW m_Action, ::UnityEngine::InputSystem::InputBinding_Flags m_Flags, ::StringW m_OverridePath, ::StringW m_OverrideInteractions,
                                                                 ::StringW m_OverrideProcessors) noexcept {
  this->m_Name = m_Name;
  this->m_Id = m_Id;
  this->m_Path = m_Path;
  this->m_Interactions = m_Interactions;
  this->m_Processors = m_Processors;
  this->m_Groups = m_Groups;
  this->m_Action = m_Action;
  this->m_Flags = m_Flags;
  this->m_OverridePath = m_OverridePath;
  this->m_OverrideInteractions = m_OverrideInteractions;
  this->m_OverrideProcessors = m_OverrideProcessors;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputBinding::InputBinding() {}
