#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SR.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SR)
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SR;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SR);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SR
class CORDL_TYPE SR : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetString, addr 0x5fc7898, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetString(::System::Globalization::CultureInfo* culture, ::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetString, addr 0x5fbe510, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW name);

  /// @brief Method GetString, addr 0x5fbec30, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SR();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SR", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SR(SR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SR", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SR(SR const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17123 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SR, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SR);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SR*, "System.Runtime.Serialization", "SR");
