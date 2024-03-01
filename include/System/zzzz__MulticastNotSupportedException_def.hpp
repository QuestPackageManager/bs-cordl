#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MulticastNotSupportedException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class MulticastNotSupportedException;
}
// Write type traits
MARK_REF_PTR_T(::System::MulticastNotSupportedException);
// Type: System::MulticastNotSupportedException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::MulticastNotSupportedException*
class CORDL_TYPE MulticastNotSupportedException : public ::System::SystemException {
public:
  // Declarations
  static inline ::System::MulticastNotSupportedException* New_ctor();

  static inline ::System::MulticastNotSupportedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::MulticastNotSupportedException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x26a23d8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26a2458, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x26a2434, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MulticastNotSupportedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MulticastNotSupportedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MulticastNotSupportedException(MulticastNotSupportedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MulticastNotSupportedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MulticastNotSupportedException(MulticastNotSupportedException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MulticastNotSupportedException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MulticastNotSupportedException);
DEFINE_IL2CPP_ARG_TYPE(::System::MulticastNotSupportedException*, "System", "MulticastNotSupportedException");
