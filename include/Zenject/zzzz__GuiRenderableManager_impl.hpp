#pragma once
// IWYU pragma private; include "Zenject\GuiRenderableManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__GuiRenderableManager_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__GuiRenderableManager_def.hpp"
#include "Zenject/zzzz__IGuiRenderable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::GuiRenderableManager_RenderableInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GuiRenderableManager_RenderableInfo::*)(::Zenject::IGuiRenderable*, int32_t)>(
    &::Zenject::GuiRenderableManager_RenderableInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e90c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager_RenderableInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::IGuiRenderable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager_RenderableInfo.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::GuiRenderableManager_RenderableInfo::__zenCreate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e912f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager_RenderableInfo*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager_RenderableInfo.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::GuiRenderableManager_RenderableInfo::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6e913ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager_RenderableInfo*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IGuiRenderable*& Zenject::GuiRenderableManager_RenderableInfo::__cordl_internal_get_Renderable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Renderable;
}
constexpr ::Zenject::IGuiRenderable* const& Zenject::GuiRenderableManager_RenderableInfo::__cordl_internal_get_Renderable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Renderable;
}
constexpr void Zenject::GuiRenderableManager_RenderableInfo::__cordl_internal_set_Renderable(::Zenject::IGuiRenderable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Renderable = value;
}
constexpr int32_t& Zenject::GuiRenderableManager_RenderableInfo::__cordl_internal_get_Priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Priority;
}
constexpr int32_t const& Zenject::GuiRenderableManager_RenderableInfo::__cordl_internal_get_Priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Priority;
}
constexpr void Zenject::GuiRenderableManager_RenderableInfo::__cordl_internal_set_Priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Priority = value;
}
inline void Zenject::GuiRenderableManager_RenderableInfo::_ctor(::Zenject::IGuiRenderable* renderable, int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager_RenderableInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Zenject::IGuiRenderable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderable, priority);
}
inline ::System::Object* Zenject::GuiRenderableManager_RenderableInfo::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager_RenderableInfo*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::GuiRenderableManager_RenderableInfo::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager_RenderableInfo*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::GuiRenderableManager_RenderableInfo* Zenject::GuiRenderableManager_RenderableInfo::New_ctor(::Zenject::IGuiRenderable* renderable, int32_t priority) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::GuiRenderableManager_RenderableInfo*>(renderable, priority));
}
// Ctor Parameters []
constexpr ::Zenject::GuiRenderableManager_RenderableInfo::GuiRenderableManager_RenderableInfo() {}
//  Writing Method size for method: ::Zenject::GuiRenderableManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GuiRenderableManager___c::*)()>(&::Zenject::GuiRenderableManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e91708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager___c.__ctor_b__1_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::GuiRenderableManager___c::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::GuiRenderableManager___c::__ctor_b__1_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e9170c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c*>(),
                                                                                           { "<.ctor>b__1_2", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager___c.__ctor_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::GuiRenderableManager___c::*)(::Zenject::GuiRenderableManager_RenderableInfo*)>(
    &::Zenject::GuiRenderableManager___c::__ctor_b__1_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e91720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c*>(), { "<.ctor>b__1_0", {}, { ::i2c::type_of<::Zenject::GuiRenderableManager_RenderableInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::GuiRenderableManager___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e91734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::GuiRenderableManager___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e91778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::GuiRenderableManager___c::setStaticF___9(::Zenject::GuiRenderableManager___c* value) {
  ::cordl_internals::setStaticField<::Zenject::GuiRenderableManager___c*, "<>9", ::Zenject::GuiRenderableManager___c*>(std::forward<::Zenject::GuiRenderableManager___c*>(value));
}
inline ::Zenject::GuiRenderableManager___c* Zenject::GuiRenderableManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::GuiRenderableManager___c*, "<>9", ::Zenject::GuiRenderableManager___c*>();
}
inline void Zenject::GuiRenderableManager___c::setStaticF___9__1_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__1_2", ::Zenject::GuiRenderableManager___c*>(
      std::forward<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*>(value));
}
inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* Zenject::GuiRenderableManager___c::getStaticF___9__1_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>*, "<>9__1_2", ::Zenject::GuiRenderableManager___c*>();
}
inline void Zenject::GuiRenderableManager___c::setStaticF___9__1_0(::System::Func_2<::Zenject::GuiRenderableManager_RenderableInfo*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::GuiRenderableManager_RenderableInfo*, int32_t>*, "<>9__1_0", ::Zenject::GuiRenderableManager___c*>(
      std::forward<::System::Func_2<::Zenject::GuiRenderableManager_RenderableInfo*, int32_t>*>(value));
}
inline ::System::Func_2<::Zenject::GuiRenderableManager_RenderableInfo*, int32_t>* Zenject::GuiRenderableManager___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::GuiRenderableManager_RenderableInfo*, int32_t>*, "<>9__1_0", ::Zenject::GuiRenderableManager___c*>();
}
inline void Zenject::GuiRenderableManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Zenject::GuiRenderableManager___c::__ctor_b__1_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c*>(),
                                                                                         { "<.ctor>b__1_2", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline int32_t Zenject::GuiRenderableManager___c::__ctor_b__1_0(::Zenject::GuiRenderableManager_RenderableInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c*>(), { "<.ctor>b__1_0", {}, { ::i2c::type_of<::Zenject::GuiRenderableManager_RenderableInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::GuiRenderableManager___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::GuiRenderableManager___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::GuiRenderableManager___c* Zenject::GuiRenderableManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::GuiRenderableManager___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::GuiRenderableManager___c::GuiRenderableManager___c() {}
//  Writing Method size for method: ::Zenject::GuiRenderableManager___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GuiRenderableManager___c__DisplayClass1_0::*)()>(&::Zenject::GuiRenderableManager___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e90c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager___c__DisplayClass1_0.__ctor_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::GuiRenderableManager___c__DisplayClass1_0::*)(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*)>(
    &::Zenject::GuiRenderableManager___c__DisplayClass1_0::__ctor_b__1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e9190c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c__DisplayClass1_0*>(),
                                                                                           { "<.ctor>b__1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager___c__DisplayClass1_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::GuiRenderableManager___c__DisplayClass1_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e9199c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c__DisplayClass1_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager___c__DisplayClass1_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::GuiRenderableManager___c__DisplayClass1_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6e919e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c__DisplayClass1_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::IGuiRenderable*& Zenject::GuiRenderableManager___c__DisplayClass1_0::__cordl_internal_get_renderable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderable;
}
constexpr ::Zenject::IGuiRenderable* const& Zenject::GuiRenderableManager___c__DisplayClass1_0::__cordl_internal_get_renderable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderable;
}
constexpr void Zenject::GuiRenderableManager___c__DisplayClass1_0::__cordl_internal_set_renderable(::Zenject::IGuiRenderable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderable = value;
}
inline void Zenject::GuiRenderableManager___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::GuiRenderableManager___c__DisplayClass1_0::__ctor_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c__DisplayClass1_0*>(),
                                                                                         { "<.ctor>b__1", {}, { ::i2c::type_of<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::GuiRenderableManager___c__DisplayClass1_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c__DisplayClass1_0*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::GuiRenderableManager___c__DisplayClass1_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager___c__DisplayClass1_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::GuiRenderableManager___c__DisplayClass1_0* Zenject::GuiRenderableManager___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::GuiRenderableManager___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::GuiRenderableManager___c__DisplayClass1_0::GuiRenderableManager___c__DisplayClass1_0() {}
//  Writing Method size for method: ::Zenject::GuiRenderableManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GuiRenderableManager::*)(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>*,
                                                                                                 ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*)>(
    &::Zenject::GuiRenderableManager::_ctor)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x6e906f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager.OnGui
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::GuiRenderableManager::*)()>(&::Zenject::GuiRenderableManager::OnGui)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x6e90c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager*>(), { "OnGui", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::GuiRenderableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e90ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::GuiRenderableManager.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::GuiRenderableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6e91018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::GuiRenderableManager_RenderableInfo*>*& Zenject::GuiRenderableManager::__cordl_internal_get__renderables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderables;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::GuiRenderableManager_RenderableInfo*>* const& Zenject::GuiRenderableManager::__cordl_internal_get__renderables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderables;
}
constexpr void Zenject::GuiRenderableManager::__cordl_internal_set__renderables(::System::Collections::Generic::List_1<::Zenject::GuiRenderableManager_RenderableInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderables = value;
}
inline void Zenject::GuiRenderableManager::_ctor(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>* renderables,
                                                 ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderables, priorities);
}
inline void Zenject::GuiRenderableManager::OnGui() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager*>(), { "OnGui", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::GuiRenderableManager::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::GuiRenderableManager::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::GuiRenderableManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::GuiRenderableManager* Zenject::GuiRenderableManager::New_ctor(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>* renderables,
                                                                                ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::GuiRenderableManager*>(renderables, priorities));
}
// Ctor Parameters []
constexpr ::Zenject::GuiRenderableManager::GuiRenderableManager() {}
