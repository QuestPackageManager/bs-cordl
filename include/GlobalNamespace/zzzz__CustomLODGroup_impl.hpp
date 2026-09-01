#pragma once
// IWYU pragma private; include "GlobalNamespace\CustomLODGroup.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomLODGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomLODGroup.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLODGroup::*)()>(&::GlobalNamespace::CustomLODGroup::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x597db90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLODGroup.GetStartupLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomLODGroup::*)()>(&::GlobalNamespace::CustomLODGroup::GetStartupLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { ::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLODGroup.GetActiveLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CustomLODGroup::*)()>(&::GlobalNamespace::CustomLODGroup::GetActiveLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x597dd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "GetActiveLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLODGroup.SetActiveLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLODGroup::*)(int32_t)>(&::GlobalNamespace::CustomLODGroup::SetActiveLevel)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x597dbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "SetActiveLevel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLODGroup.ToggleLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLODGroup::*)()>(&::GlobalNamespace::CustomLODGroup::ToggleLevel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597de0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "ToggleLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLODGroup.DisableAllLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLODGroup::*)()>(&::GlobalNamespace::CustomLODGroup::DisableAllLevels)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x597dd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "DisableAllLevels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLODGroup.SetLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLODGroup::*)(::ArrayW<::UnityEngine::GameObject*>)>(&::GlobalNamespace::CustomLODGroup::SetLevels)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x597de34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "SetLevels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLODGroup.DetectLODs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::GlobalNamespace::CustomLODGroup::*)()>(
    &::GlobalNamespace::CustomLODGroup::DetectLODs)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x597de5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "DetectLODs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLODGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomLODGroup::*)()>(&::GlobalNamespace::CustomLODGroup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597e054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::CustomLODGroup::__cordl_internal_get__levels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levels;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::CustomLODGroup::__cordl_internal_get__levels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levels;
}
constexpr void GlobalNamespace::CustomLODGroup::__cordl_internal_set__levels(::ArrayW<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levels = value;
}
constexpr int32_t& GlobalNamespace::CustomLODGroup::__cordl_internal_get__activeLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeLevel;
}
constexpr int32_t const& GlobalNamespace::CustomLODGroup::__cordl_internal_get__activeLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeLevel;
}
constexpr void GlobalNamespace::CustomLODGroup::__cordl_internal_set__activeLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeLevel = value;
}
inline void GlobalNamespace::CustomLODGroup::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomLODGroup::GetStartupLevel() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CustomLODGroup::GetActiveLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "GetActiveLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GlobalNamespace::CustomLODGroup::SetActiveLevel(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "SetActiveLevel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void GlobalNamespace::CustomLODGroup::ToggleLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "ToggleLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomLODGroup::DisableAllLevels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "DisableAllLevels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomLODGroup::SetLevels(::ArrayW<::UnityEngine::GameObject*> levels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "SetLevels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levels);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::CustomLODGroup::DetectLODs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { "DetectLODs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline void GlobalNamespace::CustomLODGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomLODGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomLODGroup* GlobalNamespace::CustomLODGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomLODGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomLODGroup::CustomLODGroup() {}
