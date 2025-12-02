#pragma once
// IWYU pragma private; include "System/ServiceModel/Internals/LocalAppContextSwitches.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalAppContextSwitches)
// Forward declare root types
namespace System::ServiceModel::Internals {
class LocalAppContextSwitches;
}
// Write type traits
MARK_REF_PTR_T(::System::ServiceModel::Internals::LocalAppContextSwitches);
// Dependencies System.Object
namespace System::ServiceModel::Internals {
// Is value type: false
// CS Name: System.ServiceModel.Internals.LocalAppContextSwitches
class CORDL_TYPE LocalAppContextSwitches : public ::System::Object {
public:
  // Declarations
  /// @brief Field IncludeNullExceptionMessageInETWTrace, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_IncludeNullExceptionMessageInETWTrace, put = setStaticF_IncludeNullExceptionMessageInETWTrace)) bool IncludeNullExceptionMessageInETWTrace;

  static inline bool getStaticF_IncludeNullExceptionMessageInETWTrace();

  static inline void setStaticF_IncludeNullExceptionMessageInETWTrace(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalAppContextSwitches();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalAppContextSwitches", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalAppContextSwitches(LocalAppContextSwitches&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalAppContextSwitches", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalAppContextSwitches(LocalAppContextSwitches const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21076 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ServiceModel::Internals::LocalAppContextSwitches, 0x10>, "Size mismatch!");

} // namespace System::ServiceModel::Internals
NEED_NO_BOX(::System::ServiceModel::Internals::LocalAppContextSwitches);
DEFINE_IL2CPP_ARG_TYPE(::System::ServiceModel::Internals::LocalAppContextSwitches*, "System.ServiceModel.Internals", "LocalAppContextSwitches");
