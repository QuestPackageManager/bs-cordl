#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InstantiateCallbackConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ArgConditionCopyNonLazyBinder)
namespace Zenject {
struct TypeValuePair;
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
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ArgConditionCopyNonLazyBinder);
// Type: Zenject::ArgConditionCopyNonLazyBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10852))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10597))
// CS Name: ::Zenject::ArgConditionCopyNonLazyBinder*
class CORDL_TYPE ArgConditionCopyNonLazyBinder : public ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder {
public:
  // Declarations
  static inline ::Zenject::ArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method .ctor addr 0x2d5e9ac size 0x8 virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(T param);

  /// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2> inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2);

  /// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3> inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3);

  /// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4);

  /// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5);

  /// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6);

  /// @brief Method WithArguments addr 0x2d5e9b4 size 0x18c virtual false final false
  inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WithArgumentsExplicit addr 0x2d5eb40 size 0x3a8 virtual false final false
  inline ::Zenject::InstantiateCallbackConditionCopyNonLazyBinder* WithArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs);

  // Ctor Parameters [CppParam { name: "", ty: "ArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgConditionCopyNonLazyBinder(ArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgConditionCopyNonLazyBinder(ArgConditionCopyNonLazyBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgConditionCopyNonLazyBinder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ArgConditionCopyNonLazyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ArgConditionCopyNonLazyBinder*, "Zenject", "ArgConditionCopyNonLazyBinder");
