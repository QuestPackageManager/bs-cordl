#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class DebugData;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::DebugData);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.DebugData
class CORDL_TYPE DebugData : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssemblyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AssemblyName, put = __cordl_internal_set_AssemblyName)) ::StringW AssemblyName;

  /// @brief Field DebugTypes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_DebugTypes, put = __cordl_internal_set_DebugTypes)) ::System::Collections::Generic::List_1<::StringW>* DebugTypes;

  static inline ::Meta::XR::ImmersiveDebugger::DebugData* New_ctor(::StringW assemblyName, ::System::Collections::Generic::List_1<::StringW>* types);

  constexpr ::StringW const& __cordl_internal_get_AssemblyName() const;

  constexpr ::StringW& __cordl_internal_get_AssemblyName();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_DebugTypes() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_DebugTypes();

  constexpr void __cordl_internal_set_AssemblyName(::StringW value);

  constexpr void __cordl_internal_set_DebugTypes(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x582c3b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW assemblyName, ::System::Collections::Generic::List_1<::StringW>* types);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugData(DebugData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugData(DebugData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18284 };

  /// @brief Field AssemblyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___AssemblyName;

  /// @brief Field DebugTypes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___DebugTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugData, ___AssemblyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugData, ___DebugTypes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::DebugData, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::DebugData);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::DebugData*, "Meta.XR.ImmersiveDebugger", "DebugData");
