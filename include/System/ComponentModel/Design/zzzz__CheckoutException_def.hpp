#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/CheckoutException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__ExternalException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CheckoutException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class CheckoutException;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::CheckoutException);
// Type: System.ComponentModel.Design::CheckoutException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: ::System.ComponentModel.Design::CheckoutException*
class CORDL_TYPE CheckoutException : public ::System::Runtime::InteropServices::ExternalException {
public:
  // Declarations
  /// @brief Field Canceled, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Canceled, put = setStaticF_Canceled))::System::ComponentModel::Design::CheckoutException* Canceled;

  static inline ::System::ComponentModel::Design::CheckoutException* New_ctor();

  static inline ::System::ComponentModel::Design::CheckoutException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ComponentModel::Design::CheckoutException* New_ctor(::StringW message, int32_t errorCode);

  /// @brief Method .ctor, addr 0x2f8bff4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2f8c004, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2f8bffc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, int32_t errorCode);

  static inline ::System::ComponentModel::Design::CheckoutException* getStaticF_Canceled();

  static inline void setStaticF_Canceled(::System::ComponentModel::Design::CheckoutException* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CheckoutException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CheckoutException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CheckoutException(CheckoutException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CheckoutException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CheckoutException(CheckoutException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::CheckoutException, 0x90>, "Size mismatch!");

} // namespace System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::CheckoutException);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::CheckoutException*, "System.ComponentModel.Design", "CheckoutException");
