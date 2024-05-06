#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(APIUpdaterRuntimeHelpers)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::_Scripting::APIUpdating {
class APIUpdaterRuntimeHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers);
// Type: UnityEngine._Scripting.APIUpdating::APIUpdaterRuntimeHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::_Scripting::APIUpdating {
// Is value type: false
// CS Name: ::UnityEngine._Scripting.APIUpdating::APIUpdaterRuntimeHelpers*
class CORDL_TYPE APIUpdaterRuntimeHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMovedFromAttributeDataForType, addr 0x3423d0c, size 0x140, virtual false, abstract: false, final false
  static inline bool GetMovedFromAttributeDataForType(::System::Type* sourceType, ByRef<::StringW> assembly, ByRef<::StringW> nsp, ByRef<::StringW> klass);

  /// @brief Method GetObsoleteTypeRedirection, addr 0x3423e4c, size 0x2bc, virtual false, abstract: false, final false
  static inline bool GetObsoleteTypeRedirection(::System::Type* sourceType, ByRef<::StringW> assemblyName, ByRef<::StringW> nsp, ByRef<::StringW> className);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr APIUpdaterRuntimeHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "APIUpdaterRuntimeHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  APIUpdaterRuntimeHelpers(APIUpdaterRuntimeHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "APIUpdaterRuntimeHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  APIUpdaterRuntimeHelpers(APIUpdaterRuntimeHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::_Scripting::APIUpdating
NEED_NO_BOX(::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*, "UnityEngine._Scripting.APIUpdating", "APIUpdaterRuntimeHelpers");
