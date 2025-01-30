#pragma once
// IWYU pragma private; include "Zenject/ConventionSelectTypesBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConventionSelectTypesBinder)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class ConventionBindInfo;
}
namespace Zenject {
class ConventionFilterTypesBinder;
}
namespace Zenject {
class ConventionSelectTypesBinder___c;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ConventionSelectTypesBinder;
}
namespace Zenject {
class ConventionSelectTypesBinder___c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ConventionSelectTypesBinder);
MARK_REF_PTR_T(::Zenject::ConventionSelectTypesBinder___c);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConventionSelectTypesBinder/<>c
class CORDL_TYPE ConventionSelectTypesBinder___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::ConventionSelectTypesBinder___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_2<::System::Type*, bool>* __9__4_0;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::System::Type*, bool>* __9__5_0;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::System::Type*, bool>* __9__6_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::System::Type*, bool>* __9__7_0;

  static inline ::Zenject::ConventionSelectTypesBinder___c* New_ctor();

  /// @brief Method <AllAbstractClasses>b__6_0, addr 0x4b04cf0, size 0x3c, virtual false, abstract: false, final false
  inline bool _AllAbstractClasses_b__6_0(::System::Type* t);

  /// @brief Method <AllClasses>b__4_0, addr 0x4b04c94, size 0x18, virtual false, abstract: false, final false
  inline bool _AllClasses_b__4_0(::System::Type* t);

  /// @brief Method <AllInterfaces>b__7_0, addr 0x4b04d2c, size 0x18, virtual false, abstract: false, final false
  inline bool _AllInterfaces_b__7_0(::System::Type* t);

  /// @brief Method <AllNonAbstractClasses>b__5_0, addr 0x4b04cac, size 0x44, virtual false, abstract: false, final false
  inline bool _AllNonAbstractClasses_b__5_0(::System::Type* t);

  /// @brief Method __zenCreate, addr 0x4b04d44, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b04d98, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b04c8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::ConventionSelectTypesBinder___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__4_0();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__5_0();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__6_0();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__7_0();

  static inline void setStaticF___9(::Zenject::ConventionSelectTypesBinder___c* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::System::Type*, bool>* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::System::Type*, bool>* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::System::Type*, bool>* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::System::Type*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionSelectTypesBinder___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConventionSelectTypesBinder___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionSelectTypesBinder___c(ConventionSelectTypesBinder___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionSelectTypesBinder___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionSelectTypesBinder___c(ConventionSelectTypesBinder___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConventionSelectTypesBinder___c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConventionSelectTypesBinder
class CORDL_TYPE ConventionSelectTypesBinder : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::ConventionSelectTypesBinder___c;

  /// @brief Field _bindInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bindInfo, put = __cordl_internal_set__bindInfo)) ::Zenject::ConventionBindInfo* _bindInfo;

  /// @brief Method AllAbstractClasses, addr 0x4b04a58, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* AllAbstractClasses();

  /// @brief Method AllClasses, addr 0x4b04880, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* AllClasses();

  /// @brief Method AllInterfaces, addr 0x4b04b44, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* AllInterfaces();

  /// @brief Method AllNonAbstractClasses, addr 0x4b0496c, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* AllNonAbstractClasses();

  /// @brief Method AllTypes, addr 0x4b0487c, size 0x4, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* AllTypes();

  /// @brief Method CreateNextBinder, addr 0x4b0481c, size 0x60, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* CreateNextBinder();

  static inline ::Zenject::ConventionSelectTypesBinder* New_ctor(::Zenject::ConventionBindInfo* bindInfo);

  constexpr ::Zenject::ConventionBindInfo* const& __cordl_internal_get__bindInfo() const;

  constexpr ::Zenject::ConventionBindInfo*& __cordl_internal_get__bindInfo();

  constexpr void __cordl_internal_set__bindInfo(::Zenject::ConventionBindInfo* value);

  /// @brief Method .ctor, addr 0x4b00a24, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ConventionBindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionSelectTypesBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConventionSelectTypesBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionSelectTypesBinder(ConventionSelectTypesBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionSelectTypesBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionSelectTypesBinder(ConventionSelectTypesBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12040 };

  /// @brief Field _bindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ConventionBindInfo* ____bindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ConventionSelectTypesBinder, ____bindInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ConventionSelectTypesBinder, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ConventionSelectTypesBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionSelectTypesBinder*, "Zenject", "ConventionSelectTypesBinder");
NEED_NO_BOX(::Zenject::ConventionSelectTypesBinder___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionSelectTypesBinder___c*, "Zenject", "ConventionSelectTypesBinder/<>c");
