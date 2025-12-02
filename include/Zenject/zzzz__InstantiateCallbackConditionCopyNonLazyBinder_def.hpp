#pragma once
// IWYU pragma private; include "Zenject/InstantiateCallbackConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(InstantiateCallbackConditionCopyNonLazyBinder)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template <typename T> class InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1;
}
// Forward declare root types
namespace Zenject {
class InstantiateCallbackConditionCopyNonLazyBinder;
}
namespace Zenject {
template <typename T> class InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InstantiateCallbackConditionCopyNonLazyBinder);
MARK_GEN_REF_PTR_T(::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Zenject.InstantiateCallbackConditionCopyNonLazyBinder/<>c__DisplayClass2_0`1<T>
class CORDL_TYPE InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_2<::Zenject::InjectContext*, T>* callback;

  static inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>* New_ctor();

  /// @brief Method <OnInstantiated>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _OnInstantiated_b__0(::Zenject::InjectContext* ctx, ::System::Object* obj);

  constexpr ::System::Action_2<::Zenject::InjectContext*, T>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_2<::Zenject::InjectContext*, T>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_2<::Zenject::InjectContext*, T>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1(InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1(InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14246 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::Zenject::InjectContext*, T>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies Zenject.ConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InstantiateCallbackConditionCopyNonLazyBinder
class CORDL_TYPE InstantiateCallbackConditionCopyNonLazyBinder : public ::Zenject::ConditionCopyNonLazyBinder {
public:
  // Declarations
  template <typename T> using __c__DisplayClass2_0_1 = ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1<T>;

  static inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method OnInstantiated, addr 0x6c27dc0, size 0x18, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* OnInstantiated(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* callback);

  /// @brief Method OnInstantiated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConditionCopyNonLazyBinder* OnInstantiated(::System::Action_2<::Zenject::InjectContext*, T>* callback);

  /// @brief Method .ctor, addr 0x6c27db8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstantiateCallbackConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstantiateCallbackConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstantiateCallbackConditionCopyNonLazyBinder(InstantiateCallbackConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstantiateCallbackConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstantiateCallbackConditionCopyNonLazyBinder(InstantiateCallbackConditionCopyNonLazyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14247 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InstantiateCallbackConditionCopyNonLazyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InstantiateCallbackConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstantiateCallbackConditionCopyNonLazyBinder*, "Zenject", "InstantiateCallbackConditionCopyNonLazyBinder");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::InstantiateCallbackConditionCopyNonLazyBinder___c__DisplayClass2_0_1, "Zenject",
                                     "InstantiateCallbackConditionCopyNonLazyBinder/<>c__DisplayClass2_0`1");
