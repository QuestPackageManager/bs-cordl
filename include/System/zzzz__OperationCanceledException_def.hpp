#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OperationCanceledException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System {
class OperationCanceledException;
}
// Write type traits
MARK_REF_PTR_T(::System::OperationCanceledException);
// Type: System::OperationCanceledException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481)), TypeDefinitionIndex(TypeDefinitionIndex(2677))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2455))
// CS Name: ::System::OperationCanceledException*
class CORDL_TYPE OperationCanceledException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field _cancellationToken, offset 0x90, size 0x8
  __declspec(property(get = __get__cancellationToken, put = __set__cancellationToken))::System::Threading::CancellationToken _cancellationToken;

  __declspec(property(get = get_CancellationToken, put = set_CancellationToken))::System::Threading::CancellationToken CancellationToken;

  constexpr ::System::Threading::CancellationToken& __get__cancellationToken();

  constexpr ::System::Threading::CancellationToken const& __get__cancellationToken() const;

  constexpr void __set__cancellationToken(::System::Threading::CancellationToken value);

  /// @brief Method get_CancellationToken addr 0x25bdf24 size 0x8 virtual false final false
  inline ::System::Threading::CancellationToken get_CancellationToken();

  /// @brief Method set_CancellationToken addr 0x25bdf2c size 0x8 virtual false final false
  inline void set_CancellationToken(::System::Threading::CancellationToken value);

  static inline ::System::OperationCanceledException* New_ctor();

  /// @brief Method .ctor addr 0x25bdf34 size 0x58 virtual false final false
  inline void _ctor();

  static inline ::System::OperationCanceledException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x25be004 size 0x20 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::OperationCanceledException* New_ctor(::StringW message, ::System::Threading::CancellationToken token);

  /// @brief Method .ctor addr 0x25be024 size 0x30 virtual false final false
  inline void _ctor(::StringW message, ::System::Threading::CancellationToken token);

  static inline ::System::OperationCanceledException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x25be054 size 0x4 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "OperationCanceledException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OperationCanceledException(OperationCanceledException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OperationCanceledException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OperationCanceledException(OperationCanceledException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OperationCanceledException();

public:
  /// @brief Field _cancellationToken, offset: 0x90, size: 0x8, def value: None
  ::System::Threading::CancellationToken ____cancellationToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::OperationCanceledException, 0x98>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::OperationCanceledException);
DEFINE_IL2CPP_ARG_TYPE(::System::OperationCanceledException*, "System", "OperationCanceledException");
