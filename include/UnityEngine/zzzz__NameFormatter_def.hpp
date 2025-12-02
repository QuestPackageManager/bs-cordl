#pragma once
// IWYU pragma private; include "UnityEngine/NameFormatter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NameFormatter)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
class NameFormatter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::NameFormatter);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.NameFormatter
class CORDL_TYPE NameFormatter : public ::System::Object {
public:
  // Declarations
  /// @brief Method FormatVariableName, addr 0x68c0384, size 0x1ac, virtual false, abstract: false, final false
  static inline ::StringW FormatVariableName(::StringW name);

  /// @brief Method FormatVariableName_Injected, addr 0x68c053c, size 0x44, virtual false, abstract: false, final false
  static inline void FormatVariableName_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameFormatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameFormatter(NameFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameFormatter(NameFormatter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10390 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::NameFormatter, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::NameFormatter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::NameFormatter*, "UnityEngine", "NameFormatter");
