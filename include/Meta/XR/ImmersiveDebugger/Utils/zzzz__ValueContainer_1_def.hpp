#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/ValueContainer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ValueContainer_1)
namespace Meta::XR::ImmersiveDebugger::Utils {
template <typename T> struct ValueStruct_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Utils {
template <typename T> class ValueContainer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1);
// Dependencies UnityEngine.ScriptableObject
namespace Meta::XR::ImmersiveDebugger::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.ValueContainer`1<T>
class CORDL_TYPE ValueContainer_1 : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_Item)) T Item[];

  /// @brief Field Values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Values,
                      put = __cordl_internal_set_Values)) ::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>, ::Array<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>>*>
      Values;

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValue(::StringW valueName);

  /// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityW<T> Load(::StringW assetName);

  static inline ::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1<T>* New_ctor();

  constexpr ::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>, ::Array<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>>*> const& __cordl_internal_get_Values() const;

  constexpr ::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>, ::Array<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>>*>& __cordl_internal_get_Values();

  constexpr void __cordl_internal_set_Values(::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>, ::Array<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(::StringW valueName);

  /// @brief Method get_Path, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::StringW get_Path();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueContainer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueContainer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueContainer_1(ValueContainer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueContainer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueContainer_1(ValueContainer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18309 };

  /// @brief Field Values, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>, ::Array<::Meta::XR::ImmersiveDebugger::Utils::ValueStruct_1<T>>*> ___Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::Utils::ValueContainer_1, "Meta.XR.ImmersiveDebugger.Utils", "ValueContainer`1");
