#pragma once
// IWYU pragma private; include "Zenject/ConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__CopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(ConditionCopyNonLazyBinder)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class BindingCondition;
}
namespace Zenject {
template <typename T> class ConditionCopyNonLazyBinder___c__4_1;
}
namespace Zenject {
template <typename T> class ConditionCopyNonLazyBinder___c__5_1;
}
namespace Zenject {
class ConditionCopyNonLazyBinder___c__DisplayClass2_0;
}
namespace Zenject {
class ConditionCopyNonLazyBinder___c__DisplayClass3_0;
}
namespace Zenject {
class ConditionCopyNonLazyBinder___c__DisplayClass3_1;
}
namespace Zenject {
class CopyNonLazyBinder;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
template <typename T> class ConditionCopyNonLazyBinder___c__4_1;
}
namespace Zenject {
template <typename T> class ConditionCopyNonLazyBinder___c__5_1;
}
namespace Zenject {
class ConditionCopyNonLazyBinder___c__DisplayClass2_0;
}
namespace Zenject {
class ConditionCopyNonLazyBinder___c__DisplayClass3_0;
}
namespace Zenject {
class ConditionCopyNonLazyBinder___c__DisplayClass3_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ConditionCopyNonLazyBinder);
MARK_GEN_REF_PTR_T(::Zenject::ConditionCopyNonLazyBinder___c__4_1);
MARK_GEN_REF_PTR_T(::Zenject::ConditionCopyNonLazyBinder___c__5_1);
MARK_REF_PTR_T(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0);
MARK_REF_PTR_T(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0);
MARK_REF_PTR_T(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Zenject.ConditionCopyNonLazyBinder/<>c__4`1<T>
class CORDL_TYPE ConditionCopyNonLazyBinder___c__4_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::Zenject::BindingCondition* __9__4_0;

  static inline ::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>* New_ctor();

  /// @brief Method <WhenInjectedInto>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _WhenInjectedInto_b__4_0(::Zenject::InjectContext* r);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>* getStaticF___9();

  static inline ::Zenject::BindingCondition* getStaticF___9__4_0();

  static inline void setStaticF___9(::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>* value);

  static inline void setStaticF___9__4_0(::Zenject::BindingCondition* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionCopyNonLazyBinder___c__4_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder___c__4_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionCopyNonLazyBinder___c__4_1(ConditionCopyNonLazyBinder___c__4_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder___c__4_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionCopyNonLazyBinder___c__4_1(ConditionCopyNonLazyBinder___c__4_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12018 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Zenject.ConditionCopyNonLazyBinder/<>c__5`1<T>
class CORDL_TYPE ConditionCopyNonLazyBinder___c__5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::Zenject::BindingCondition* __9__5_0;

  static inline ::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>* New_ctor();

  /// @brief Method <WhenNotInjectedInto>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _WhenNotInjectedInto_b__5_0(::Zenject::InjectContext* r);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>* getStaticF___9();

  static inline ::Zenject::BindingCondition* getStaticF___9__5_0();

  static inline void setStaticF___9(::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>* value);

  static inline void setStaticF___9__5_0(::Zenject::BindingCondition* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionCopyNonLazyBinder___c__5_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder___c__5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionCopyNonLazyBinder___c__5_1(ConditionCopyNonLazyBinder___c__5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder___c__5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionCopyNonLazyBinder___c__5_1(ConditionCopyNonLazyBinder___c__5_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12019 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConditionCopyNonLazyBinder/<>c__DisplayClass2_0
class CORDL_TYPE ConditionCopyNonLazyBinder___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_instance, put = __cordl_internal_set_instance)) ::System::Object* instance;

  static inline ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0* New_ctor();

  /// @brief Method <WhenInjectedIntoInstance>b__0, addr 0x4b00738, size 0x24, virtual false, abstract: false, final false
  inline bool _WhenInjectedIntoInstance_b__0(::Zenject::InjectContext* r);

  constexpr ::System::Object* const& __cordl_internal_get_instance() const;

  constexpr ::System::Object*& __cordl_internal_get_instance();

  constexpr void __cordl_internal_set_instance(::System::Object* value);

  /// @brief Method __zenCreate, addr 0x4b0075c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b007b0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b00668, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionCopyNonLazyBinder___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionCopyNonLazyBinder___c__DisplayClass2_0(ConditionCopyNonLazyBinder___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionCopyNonLazyBinder___c__DisplayClass2_0(ConditionCopyNonLazyBinder___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12020 };

  /// @brief Field instance, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0, ___instance) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConditionCopyNonLazyBinder/<>c__DisplayClass3_0
class CORDL_TYPE ConditionCopyNonLazyBinder___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field targets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_targets, put = __cordl_internal_set_targets)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> targets;

  static inline ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0* New_ctor();

  /// @brief Method <WhenInjectedInto>b__0, addr 0x4b00968, size 0xf0, virtual false, abstract: false, final false
  inline bool _WhenInjectedInto_b__0(::Zenject::InjectContext* r);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_targets() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_targets();

  constexpr void __cordl_internal_set_targets(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method __zenCreate, addr 0x4b00a60, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b00ab4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b00730, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionCopyNonLazyBinder___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionCopyNonLazyBinder___c__DisplayClass3_0(ConditionCopyNonLazyBinder___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionCopyNonLazyBinder___c__DisplayClass3_0(ConditionCopyNonLazyBinder___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12021 };

  /// @brief Field targets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___targets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0, ___targets) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConditionCopyNonLazyBinder/<>c__DisplayClass3_1
class CORDL_TYPE ConditionCopyNonLazyBinder___c__DisplayClass3_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field r, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) ::Zenject::InjectContext* r;

  static inline ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1* New_ctor();

  /// @brief Method <WhenInjectedInto>b__1, addr 0x4b00c6c, size 0xc0, virtual false, abstract: false, final false
  inline bool _WhenInjectedInto_b__1(::System::Type* x);

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get_r() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_r();

  constexpr void __cordl_internal_set_r(::Zenject::InjectContext* value);

  /// @brief Method __zenCreate, addr 0x4b00d2c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b00d80, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b00a58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionCopyNonLazyBinder___c__DisplayClass3_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder___c__DisplayClass3_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionCopyNonLazyBinder___c__DisplayClass3_1(ConditionCopyNonLazyBinder___c__DisplayClass3_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder___c__DisplayClass3_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionCopyNonLazyBinder___c__DisplayClass3_1(ConditionCopyNonLazyBinder___c__DisplayClass3_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12022 };

  /// @brief Field r, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___r;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1, ___r) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies Zenject.CopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConditionCopyNonLazyBinder
class CORDL_TYPE ConditionCopyNonLazyBinder : public ::Zenject::CopyNonLazyBinder {
public:
  // Declarations
  template <typename T> using __c__4_1 = ::Zenject::ConditionCopyNonLazyBinder___c__4_1<T>;

  template <typename T> using __c__5_1 = ::Zenject::ConditionCopyNonLazyBinder___c__5_1<T>;

  using __c__DisplayClass2_0 = ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0;

  using __c__DisplayClass3_1 = ::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1;

  static inline ::Zenject::ConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method When, addr 0x4b0058c, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::CopyNonLazyBinder* When(::Zenject::BindingCondition* condition);

  /// @brief Method WhenInjectedInto, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* WhenInjectedInto();

  /// @brief Method WhenInjectedInto, addr 0x4b00670, size 0xc0, virtual false, abstract: false, final false
  inline ::Zenject::CopyNonLazyBinder* WhenInjectedInto(::ArrayW<::System::Type*, ::Array<::System::Type*>*> targets);

  /// @brief Method WhenInjectedIntoInstance, addr 0x4b005a8, size 0xc0, virtual false, abstract: false, final false
  inline ::Zenject::CopyNonLazyBinder* WhenInjectedIntoInstance(::System::Object* instance);

  /// @brief Method WhenNotInjectedInto, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* WhenNotInjectedInto();

  /// @brief Method .ctor, addr 0x4b0057c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionCopyNonLazyBinder(ConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionCopyNonLazyBinder(ConditionCopyNonLazyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12023 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConditionCopyNonLazyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConditionCopyNonLazyBinder*, "Zenject", "ConditionCopyNonLazyBinder");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ConditionCopyNonLazyBinder___c__4_1, "Zenject", "ConditionCopyNonLazyBinder/<>c__4`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ConditionCopyNonLazyBinder___c__5_1, "Zenject", "ConditionCopyNonLazyBinder/<>c__5`1");
NEED_NO_BOX(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass2_0*, "Zenject", "ConditionCopyNonLazyBinder/<>c__DisplayClass2_0");
NEED_NO_BOX(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_0*, "Zenject", "ConditionCopyNonLazyBinder/<>c__DisplayClass3_0");
NEED_NO_BOX(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConditionCopyNonLazyBinder___c__DisplayClass3_1*, "Zenject", "ConditionCopyNonLazyBinder/<>c__DisplayClass3_1");
