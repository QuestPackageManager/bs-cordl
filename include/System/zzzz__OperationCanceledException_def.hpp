#pragma once
// IWYU pragma private; include "System/OperationCanceledException.hpp"
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
// Dependencies System.SystemException, System.Threading.CancellationToken
namespace System {
// Is value type: false
// CS Name: System.OperationCanceledException
class CORDL_TYPE OperationCanceledException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_CancellationToken, put = set_CancellationToken)) ::System::Threading::CancellationToken CancellationToken;

  /// @brief Field _cancellationToken, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationToken, put = __cordl_internal_set__cancellationToken)) ::System::Threading::CancellationToken _cancellationToken;

  static inline ::System::OperationCanceledException* New_ctor();

  static inline ::System::OperationCanceledException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::OperationCanceledException* New_ctor(::StringW message);

  static inline ::System::OperationCanceledException* New_ctor(::StringW message, ::System::Threading::CancellationToken token);

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get__cancellationToken() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get__cancellationToken();

  constexpr void __cordl_internal_set__cancellationToken(::System::Threading::CancellationToken value);

  /// @brief Method .ctor, addr 0x3e07c28, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e07d48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e07cf8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3e07d18, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Threading::CancellationToken token);

  /// @brief Method get_CancellationToken, addr 0x3e07c18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationToken get_CancellationToken();

  /// @brief Method set_CancellationToken, addr 0x3e07c20, size 0x8, virtual false, abstract: false, final false
  inline void set_CancellationToken(::System::Threading::CancellationToken value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OperationCanceledException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OperationCanceledException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OperationCanceledException(OperationCanceledException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OperationCanceledException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OperationCanceledException(OperationCanceledException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2454 };

  /// @brief Field _cancellationToken, offset: 0x90, size: 0x8, def value: None
  ::System::Threading::CancellationToken ____cancellationToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::OperationCanceledException, ____cancellationToken) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::OperationCanceledException, 0x98>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::OperationCanceledException);
DEFINE_IL2CPP_ARG_TYPE(::System::OperationCanceledException*, "System", "OperationCanceledException");
