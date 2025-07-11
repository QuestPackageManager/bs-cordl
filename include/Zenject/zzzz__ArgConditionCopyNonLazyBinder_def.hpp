#pragma once
// IWYU pragma private; include "Zenject/ArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InstantiateCallbackConditionCopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(ArgConditionCopyNonLazyBinder)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class InstantiateCallbackConditionCopyNonLazyBinder;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ArgConditionCopyNonLazyBinder);
// Dependencies Zenject.InstantiateCallbackConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ArgConditionCopyNonLazyBinder
class CORDL_TYPE ArgConditionCopyNonLazyBinder : public ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder {
public:
  // Declarations
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method WithArguments, addr 0x4aff540, size 0x188, virtual false, abstract: false, final false
  inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WithArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(T param);

  /// @brief Method WithArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2> inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2);

  /// @brief Method WithArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3> inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3);

  /// @brief Method WithArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4);

  /// @brief Method WithArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5);

  /// @brief Method WithArguments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6);

  /// @brief Method WithArgumentsExplicit, addr 0x4aff6c8, size 0x39c, virtual false, abstract: false, final false
  inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method .ctor, addr 0x4aff538, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgConditionCopyNonLazyBinder(ArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgConditionCopyNonLazyBinder(ArgConditionCopyNonLazyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12011 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ArgConditionCopyNonLazyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ArgConditionCopyNonLazyBinder*, "Zenject", "ArgConditionCopyNonLazyBinder");
