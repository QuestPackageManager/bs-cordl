#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/StringMarshaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringMarshaller)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class StringMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::StringMarshaller);
// Dependencies System.Object
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.StringMarshaller
class CORDL_TYPE StringMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryMarshalEmptyOrNullString, addr 0x68cb17c, size 0x2c, virtual false, abstract: false, final false
  static inline bool TryMarshalEmptyOrNullString(::StringW s, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> managedSpanWrapper);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringMarshaller(StringMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringMarshaller(StringMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::StringMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::StringMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::StringMarshaller*, "UnityEngine.Bindings", "StringMarshaller");
