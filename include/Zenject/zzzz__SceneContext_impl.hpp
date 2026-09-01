#pragma once
// IWYU pragma private; include "Zenject\SceneContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__RunnableContext_impl.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
#include "Zenject/zzzz__SceneDecoratorContext_def.hpp"
//  Writing Method size for method: ::Zenject::SceneContext___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext___c::*)()>(&::Zenject::SceneContext___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e74a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c._GetParentContainers_b__50_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* (
    ::Zenject::SceneContext___c::*)(::UnityEngine::SceneManagement::Scene)>(&::Zenject::SceneContext___c::_GetParentContainers_b__50_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e74a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "<GetParentContainers>b__50_0", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c._GetParentContainers_b__50_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* (::Zenject::SceneContext___c::*)(::UnityEngine::GameObject*)>(
    &::Zenject::SceneContext___c::_GetParentContainers_b__50_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e74a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "<GetParentContainers>b__50_1", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c._GetParentContainers_b__50_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::SceneContext___c::*)(::Zenject::SceneContext*)>(
    &::Zenject::SceneContext___c::_GetParentContainers_b__50_3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e74abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "<GetParentContainers>b__50_3", {}, { ::i2c::type_of<::Zenject::SceneContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c._LookupDecoratorContexts_b__51_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* (
    ::Zenject::SceneContext___c::*)(::UnityEngine::SceneManagement::Scene)>(&::Zenject::SceneContext___c::_LookupDecoratorContexts_b__51_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e74adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "<LookupDecoratorContexts>b__51_0", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c._LookupDecoratorContexts_b__51_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>* (
    ::Zenject::SceneContext___c::*)(::UnityEngine::GameObject*)>(&::Zenject::SceneContext___c::_LookupDecoratorContexts_b__51_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e74af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "<LookupDecoratorContexts>b__51_1", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SceneContext___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SceneContext___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e74b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::SceneContext___c::setStaticF___9(::Zenject::SceneContext___c* value) {
  ::cordl_internals::setStaticField<::Zenject::SceneContext___c*, "<>9", ::Zenject::SceneContext___c*>(std::forward<::Zenject::SceneContext___c*>(value));
}
inline ::Zenject::SceneContext___c* Zenject::SceneContext___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::SceneContext___c*, "<>9", ::Zenject::SceneContext___c*>();
}
inline void
Zenject::SceneContext___c::setStaticF___9__50_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>*, "<>9__50_0",
                                    ::Zenject::SceneContext___c*>(
      std::forward<::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>* Zenject::SceneContext___c::getStaticF___9__50_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>*, "<>9__50_0",
                                           ::Zenject::SceneContext___c*>();
}
inline void
Zenject::SceneContext___c::setStaticF___9__50_1(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>*, "<>9__50_1",
                                    ::Zenject::SceneContext___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>* Zenject::SceneContext___c::getStaticF___9__50_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>*, "<>9__50_1",
                                           ::Zenject::SceneContext___c*>();
}
inline void Zenject::SceneContext___c::setStaticF___9__50_3(::System::Func_2<::UnityW<::Zenject::SceneContext>, ::Zenject::DiContainer*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::Zenject::SceneContext>, ::Zenject::DiContainer*>*, "<>9__50_3", ::Zenject::SceneContext___c*>(
      std::forward<::System::Func_2<::UnityW<::Zenject::SceneContext>, ::Zenject::DiContainer*>*>(value));
}
inline ::System::Func_2<::UnityW<::Zenject::SceneContext>, ::Zenject::DiContainer*>* Zenject::SceneContext___c::getStaticF___9__50_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::Zenject::SceneContext>, ::Zenject::DiContainer*>*, "<>9__50_3", ::Zenject::SceneContext___c*>();
}
inline void
Zenject::SceneContext___c::setStaticF___9__51_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>*, "<>9__51_0",
                                    ::Zenject::SceneContext___c*>(
      std::forward<::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>*>(value));
}
inline ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>* Zenject::SceneContext___c::getStaticF___9__51_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>*, "<>9__51_0",
                                           ::Zenject::SceneContext___c*>();
}
inline void Zenject::SceneContext___c::setStaticF___9__51_1(
    ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>*>*, "<>9__51_1",
                                    ::Zenject::SceneContext___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>*>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>*>*
Zenject::SceneContext___c::getStaticF___9__51_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>*>*,
                                           "<>9__51_1", ::Zenject::SceneContext___c*>();
}
inline void Zenject::SceneContext___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* Zenject::SceneContext___c::_GetParentContainers_b__50_0(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "<GetParentContainers>b__50_0", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method, scene);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* Zenject::SceneContext___c::_GetParentContainers_b__50_1(::UnityEngine::GameObject* root) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "<GetParentContainers>b__50_1", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>(this, ___internal_method, root);
}
inline ::Zenject::DiContainer* Zenject::SceneContext___c::_GetParentContainers_b__50_3(::Zenject::SceneContext* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "<GetParentContainers>b__50_3", {}, { ::i2c::type_of<::Zenject::SceneContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* Zenject::SceneContext___c::_LookupDecoratorContexts_b__51_0(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "<LookupDecoratorContexts>b__51_0", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method, scene);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>* Zenject::SceneContext___c::_LookupDecoratorContexts_b__51_1(::UnityEngine::GameObject* root) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "<LookupDecoratorContexts>b__51_1", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>*>(this, ___internal_method, root);
}
inline ::System::Object* Zenject::SceneContext___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SceneContext___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SceneContext___c* Zenject::SceneContext___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SceneContext___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::SceneContext___c::SceneContext___c() {}
//  Writing Method size for method: ::Zenject::SceneContext___c__DisplayClass50_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext___c__DisplayClass50_0::*)()>(&::Zenject::SceneContext___c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e73a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass50_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c__DisplayClass50_0._GetParentContainers_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SceneContext___c__DisplayClass50_0::*)(::Zenject::SceneContext*)>(
    &::Zenject::SceneContext___c__DisplayClass50_0::_GetParentContainers_b__2)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6e74d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass50_0*>(), { "<GetParentContainers>b__2", {}, { ::i2c::type_of<::Zenject::SceneContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c__DisplayClass50_0._GetParentContainers_b__4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SceneContext___c__DisplayClass50_0::*)(::StringW)>(&::Zenject::SceneContext___c__DisplayClass50_0::_GetParentContainers_b__4)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e74e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass50_0*>(), { "<GetParentContainers>b__4", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c__DisplayClass50_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SceneContext___c__DisplayClass50_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e74e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass50_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c__DisplayClass50_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SceneContext___c__DisplayClass50_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e74ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass50_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& Zenject::SceneContext___c__DisplayClass50_0::__cordl_internal_get_parentContractNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentContractNames;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& Zenject::SceneContext___c__DisplayClass50_0::__cordl_internal_get_parentContractNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentContractNames;
}
constexpr void Zenject::SceneContext___c__DisplayClass50_0::__cordl_internal_set_parentContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parentContractNames = value;
}
constexpr ::System::Func_2<::StringW, bool>*& Zenject::SceneContext___c__DisplayClass50_0::__cordl_internal_get___9__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__4;
}
constexpr ::System::Func_2<::StringW, bool>* const& Zenject::SceneContext___c__DisplayClass50_0::__cordl_internal_get___9__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__4;
}
constexpr void Zenject::SceneContext___c__DisplayClass50_0::__cordl_internal_set___9__4(::System::Func_2<::StringW, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__4 = value;
}
inline void Zenject::SceneContext___c__DisplayClass50_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass50_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::SceneContext___c__DisplayClass50_0::_GetParentContainers_b__2(::Zenject::SceneContext* sceneContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass50_0*>(), { "<GetParentContainers>b__2", {}, { ::i2c::type_of<::Zenject::SceneContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneContext);
}
inline bool Zenject::SceneContext___c__DisplayClass50_0::_GetParentContainers_b__4(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass50_0*>(), { "<GetParentContainers>b__4", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::SceneContext___c__DisplayClass50_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass50_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SceneContext___c__DisplayClass50_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass50_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SceneContext___c__DisplayClass50_0* Zenject::SceneContext___c__DisplayClass50_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SceneContext___c__DisplayClass50_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SceneContext___c__DisplayClass50_0::SceneContext___c__DisplayClass50_0() {}
//  Writing Method size for method: ::Zenject::SceneContext___c__DisplayClass52_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext___c__DisplayClass52_0::*)()>(&::Zenject::SceneContext___c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e73d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass52_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c__DisplayClass52_0._Install_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SceneContext___c__DisplayClass52_0::*)(::Zenject::DiContainer*)>(
    &::Zenject::SceneContext___c__DisplayClass52_0::_Install_b__0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e75038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass52_0*>(), { "<Install>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c__DisplayClass52_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SceneContext___c__DisplayClass52_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e750bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass52_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext___c__DisplayClass52_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SceneContext___c__DisplayClass52_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e75100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass52_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*& Zenject::SceneContext___c__DisplayClass52_0::__cordl_internal_get_parents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parents;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* const& Zenject::SceneContext___c__DisplayClass52_0::__cordl_internal_get_parents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parents;
}
constexpr void Zenject::SceneContext___c__DisplayClass52_0::__cordl_internal_set_parents(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parents = value;
}
inline void Zenject::SceneContext___c__DisplayClass52_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass52_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::SceneContext___c__DisplayClass52_0::_Install_b__0(::Zenject::DiContainer* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass52_0*>(), { "<Install>b__0", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::SceneContext___c__DisplayClass52_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass52_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SceneContext___c__DisplayClass52_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext___c__DisplayClass52_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SceneContext___c__DisplayClass52_0* Zenject::SceneContext___c__DisplayClass52_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SceneContext___c__DisplayClass52_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::SceneContext___c__DisplayClass52_0::SceneContext___c__DisplayClass52_0() {}
//  Writing Method size for method: ::Zenject::SceneContext.add_PreInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Action*)>(&::Zenject::SceneContext::add_PreInstall)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e72578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "add_PreInstall", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.remove_PreInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Action*)>(&::Zenject::SceneContext::remove_PreInstall)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e72624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "remove_PreInstall", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.add_PostInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Action*)>(&::Zenject::SceneContext::add_PostInstall)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e726d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "add_PostInstall", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.remove_PostInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Action*)>(&::Zenject::SceneContext::remove_PostInstall)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e7277c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "remove_PostInstall", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.add_PreResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Action*)>(&::Zenject::SceneContext::add_PreResolve)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e72828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "add_PreResolve", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.remove_PreResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Action*)>(&::Zenject::SceneContext::remove_PreResolve)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e728d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "remove_PreResolve", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.add_PostResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Action*)>(&::Zenject::SceneContext::add_PostResolve)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e72980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "add_PostResolve", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.remove_PostResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Action*)>(&::Zenject::SceneContext::remove_PostResolve)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e72a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "remove_PostResolve", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::SceneContext::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e72ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.get_Container
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::get_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e72b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { ::i2c::class_of<::Zenject::SceneContext*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.get_HasResolved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::get_HasResolved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e72b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_HasResolved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.get_HasInstalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::get_HasInstalled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e72b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_HasInstalled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.get_IsValidating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::get_IsValidating)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e72b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_IsValidating", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.get_ContractNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::get_ContractNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e72b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_ContractNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.set_ContractNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::Zenject::SceneContext::set_ContractNames)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e72b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "set_ContractNames", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.get_ParentContractNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::get_ParentContractNames)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e72c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_ParentContractNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.set_ParentContractNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::Zenject::SceneContext::set_ParentContractNames)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e72cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "set_ParentContractNames", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.get_ParentNewObjectsUnderSceneContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::get_ParentNewObjectsUnderSceneContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e72d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_ParentNewObjectsUnderSceneContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.set_ParentNewObjectsUnderSceneContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(bool)>(&::Zenject::SceneContext::set_ParentNewObjectsUnderSceneContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e72d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "set_ParentNewObjectsUnderSceneContext", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e72d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::Validate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e72d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "Validate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.RunInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::RunInternal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e733dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { ::i2c::class_of<::Zenject::SceneContext*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.GetRootGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* (::Zenject::SceneContext::*)()>(
    &::Zenject::SceneContext::GetRootGameObjects)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6e73404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { ::i2c::class_of<::Zenject::SceneContext*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.GetParentContainers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* (::Zenject::SceneContext::*)()>(
    &::Zenject::SceneContext::GetParentContainers)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x6e73430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "GetParentContainers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.LookupDecoratorContexts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>* (::Zenject::SceneContext::*)()>(
    &::Zenject::SceneContext::LookupDecoratorContexts)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x6e73a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "LookupDecoratorContexts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.Install
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::Install)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x6e72d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "Install", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.Resolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::Resolve)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e73340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "Resolve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*)>(
    &::Zenject::SceneContext::InstallBindings)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x6e73ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(),
                                                             { "InstallBindings", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.GetInjectableMonoBehaviours
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*)>(
    &::Zenject::SceneContext::GetInjectableMonoBehaviours)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6e74630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { ::i2c::class_of<::Zenject::SceneContext*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Zenject::SceneContext> (*)()>(&::Zenject::SceneContext::Create)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6e7467c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SceneContext::*)()>(&::Zenject::SceneContext::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6e74734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext._LookupDecoratorContexts_b__51_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::SceneContext::*)(::Zenject::SceneDecoratorContext*)>(&::Zenject::SceneContext::_LookupDecoratorContexts_b__51_2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e74844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "<LookupDecoratorContexts>b__51_2", {}, { ::i2c::type_of<::Zenject::SceneDecoratorContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SceneContext.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SceneContext::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6e748ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Zenject::SceneContext::__cordl_internal_get_PreInstall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PreInstall;
}
constexpr ::System::Action* const& Zenject::SceneContext::__cordl_internal_get_PreInstall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PreInstall;
}
constexpr void Zenject::SceneContext::__cordl_internal_set_PreInstall(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PreInstall = value;
}
constexpr ::System::Action*& Zenject::SceneContext::__cordl_internal_get_PostInstall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PostInstall;
}
constexpr ::System::Action* const& Zenject::SceneContext::__cordl_internal_get_PostInstall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PostInstall;
}
constexpr void Zenject::SceneContext::__cordl_internal_set_PostInstall(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PostInstall = value;
}
constexpr ::System::Action*& Zenject::SceneContext::__cordl_internal_get_PreResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PreResolve;
}
constexpr ::System::Action* const& Zenject::SceneContext::__cordl_internal_get_PreResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PreResolve;
}
constexpr void Zenject::SceneContext::__cordl_internal_set_PreResolve(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PreResolve = value;
}
constexpr ::System::Action*& Zenject::SceneContext::__cordl_internal_get_PostResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PostResolve;
}
constexpr ::System::Action* const& Zenject::SceneContext::__cordl_internal_get_PostResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PostResolve;
}
constexpr void Zenject::SceneContext::__cordl_internal_set_PostResolve(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PostResolve = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Zenject::SceneContext::__cordl_internal_get_OnPreInstall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreInstall;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Zenject::SceneContext::__cordl_internal_get_OnPreInstall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreInstall;
}
constexpr void Zenject::SceneContext::__cordl_internal_set_OnPreInstall(::UnityEngine::Events::UnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnPreInstall = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Zenject::SceneContext::__cordl_internal_get_OnPostInstall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPostInstall;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Zenject::SceneContext::__cordl_internal_get_OnPostInstall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPostInstall;
}
constexpr void Zenject::SceneContext::__cordl_internal_set_OnPostInstall(::UnityEngine::Events::UnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnPostInstall = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Zenject::SceneContext::__cordl_internal_get_OnPreResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreResolve;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Zenject::SceneContext::__cordl_internal_get_OnPreResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreResolve;
}
constexpr void Zenject::SceneContext::__cordl_internal_set_OnPreResolve(::UnityEngine::Events::UnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnPreResolve = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Zenject::SceneContext::__cordl_internal_get_OnPostResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPostResolve;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Zenject::SceneContext::__cordl_internal_get_OnPostResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPostResolve;
}
constexpr void Zenject::SceneContext::__cordl_internal_set_OnPostResolve(::UnityEngine::Events::UnityEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnPostResolve = value;
}
constexpr bool& Zenject::SceneContext::__cordl_internal_get__parentNewObjectsUnderSceneContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentNewObjectsUnderSceneContext;
}
constexpr bool const& Zenject::SceneContext::__cordl_internal_get__parentNewObjectsUnderSceneContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentNewObjectsUnderSceneContext;
}
constexpr void Zenject::SceneContext::__cordl_internal_set__parentNewObjectsUnderSceneContext(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentNewObjectsUnderSceneContext = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Zenject::SceneContext::__cordl_internal_get__contractNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Zenject::SceneContext::__cordl_internal_get__contractNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractNames;
}
constexpr void Zenject::SceneContext::__cordl_internal_set__contractNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contractNames = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Zenject::SceneContext::__cordl_internal_get__parentContractNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentContractNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Zenject::SceneContext::__cordl_internal_get__parentContractNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentContractNames;
}
constexpr void Zenject::SceneContext::__cordl_internal_set__parentContractNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentContractNames = value;
}
constexpr ::Zenject::DiContainer*& Zenject::SceneContext::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::SceneContext::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::SceneContext::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>*& Zenject::SceneContext::__cordl_internal_get__decoratorContexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoratorContexts;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>* const& Zenject::SceneContext::__cordl_internal_get__decoratorContexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decoratorContexts;
}
constexpr void Zenject::SceneContext::__cordl_internal_set__decoratorContexts(::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decoratorContexts = value;
}
constexpr bool& Zenject::SceneContext::__cordl_internal_get__hasInstalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInstalled;
}
constexpr bool const& Zenject::SceneContext::__cordl_internal_get__hasInstalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInstalled;
}
constexpr void Zenject::SceneContext::__cordl_internal_set__hasInstalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasInstalled = value;
}
constexpr bool& Zenject::SceneContext::__cordl_internal_get__hasResolved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasResolved;
}
constexpr bool const& Zenject::SceneContext::__cordl_internal_get__hasResolved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasResolved;
}
constexpr void Zenject::SceneContext::__cordl_internal_set__hasResolved(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasResolved = value;
}
inline void Zenject::SceneContext::setStaticF_ExtraBindingsEarlyInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::DiContainer*>*, "ExtraBindingsEarlyInstallMethod", ::Zenject::SceneContext*>(
      std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
inline ::System::Action_1<::Zenject::DiContainer*>* Zenject::SceneContext::getStaticF_ExtraBindingsEarlyInstallMethod() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::DiContainer*>*, "ExtraBindingsEarlyInstallMethod", ::Zenject::SceneContext*>();
}
inline void Zenject::SceneContext::setStaticF_ExtraBindingsInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::DiContainer*>*, "ExtraBindingsInstallMethod", ::Zenject::SceneContext*>(
      std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
inline ::System::Action_1<::Zenject::DiContainer*>* Zenject::SceneContext::getStaticF_ExtraBindingsInstallMethod() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::DiContainer*>*, "ExtraBindingsInstallMethod", ::Zenject::SceneContext*>();
}
inline void Zenject::SceneContext::setStaticF_ExtraBindingsLateInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::DiContainer*>*, "ExtraBindingsLateInstallMethod", ::Zenject::SceneContext*>(
      std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
inline ::System::Action_1<::Zenject::DiContainer*>* Zenject::SceneContext::getStaticF_ExtraBindingsLateInstallMethod() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::DiContainer*>*, "ExtraBindingsLateInstallMethod", ::Zenject::SceneContext*>();
}
inline void Zenject::SceneContext::setStaticF_ExtraPostInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::DiContainer*>*, "ExtraPostInstallMethod", ::Zenject::SceneContext*>(
      std::forward<::System::Action_1<::Zenject::DiContainer*>*>(value));
}
inline ::System::Action_1<::Zenject::DiContainer*>* Zenject::SceneContext::getStaticF_ExtraPostInstallMethod() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::DiContainer*>*, "ExtraPostInstallMethod", ::Zenject::SceneContext*>();
}
inline void Zenject::SceneContext::setStaticF_ParentContainers(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*, "ParentContainers", ::Zenject::SceneContext*>(
      std::forward<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*>(value));
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* Zenject::SceneContext::getStaticF_ParentContainers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*, "ParentContainers", ::Zenject::SceneContext*>();
}
inline void Zenject::SceneContext::add_PreInstall(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "add_PreInstall", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::SceneContext::remove_PreInstall(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "remove_PreInstall", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::SceneContext::add_PostInstall(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "add_PostInstall", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::SceneContext::remove_PostInstall(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "remove_PostInstall", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::SceneContext::add_PreResolve(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "add_PreResolve", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::SceneContext::remove_PreResolve(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "remove_PreResolve", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::SceneContext::add_PostResolve(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "add_PostResolve", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::SceneContext::remove_PostResolve(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "remove_PostResolve", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::SceneContext::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::SceneContext::get_Container() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SceneContext*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline bool Zenject::SceneContext::get_HasResolved() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_HasResolved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::SceneContext::get_HasInstalled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_HasInstalled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::SceneContext::get_IsValidating() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_IsValidating", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Zenject::SceneContext::get_ContractNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_ContractNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline void Zenject::SceneContext::set_ContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "set_ContractNames", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Zenject::SceneContext::get_ParentContractNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_ParentContractNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline void Zenject::SceneContext::set_ParentContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "set_ParentContractNames", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Zenject::SceneContext::get_ParentNewObjectsUnderSceneContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "get_ParentNewObjectsUnderSceneContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::SceneContext::set_ParentNewObjectsUnderSceneContext(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "set_ParentNewObjectsUnderSceneContext", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::SceneContext::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SceneContext::Validate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "Validate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SceneContext::RunInternal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SceneContext*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* Zenject::SceneContext::GetRootGameObjects() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SceneContext*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* Zenject::SceneContext::GetParentContainers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "GetParentContainers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>* Zenject::SceneContext::LookupDecoratorContexts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "LookupDecoratorContexts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>*>(this, ___internal_method);
}
inline void Zenject::SceneContext::Install() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "Install", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SceneContext::Resolve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "Resolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::SceneContext::InstallBindings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* injectableMonoBehaviours) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(),
                                                           { "InstallBindings", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectableMonoBehaviours);
}
inline void Zenject::SceneContext::GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* monoBehaviours) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::SceneContext*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, monoBehaviours);
}
inline ::UnityW<::Zenject::SceneContext> Zenject::SceneContext::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Zenject::SceneContext>>(nullptr, ___internal_method);
}
inline void Zenject::SceneContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::SceneContext::_LookupDecoratorContexts_b__51_2(::Zenject::SceneDecoratorContext* decoratorContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "<LookupDecoratorContexts>b__51_2", {}, { ::i2c::type_of<::Zenject::SceneDecoratorContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, decoratorContext);
}
inline ::Zenject::InjectTypeInfo* Zenject::SceneContext::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SceneContext*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SceneContext* Zenject::SceneContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SceneContext*>());
}
// Ctor Parameters []
constexpr ::Zenject::SceneContext::SceneContext() {}
