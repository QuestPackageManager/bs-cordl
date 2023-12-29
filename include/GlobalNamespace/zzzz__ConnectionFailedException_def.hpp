#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConnectionFailedException)
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionFailedException;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConnectionFailedException);
// Type: ::ConnectionFailedException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2559)), TypeDefinitionIndex(TypeDefinitionIndex(12636))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12635))
// CS Name: ::ConnectionFailedException*
class CORDL_TYPE ConnectionFailedException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field reason, offset 0x8c, size 0x4
  __declspec(property(get = __get_reason, put = __set_reason))::GlobalNamespace::ConnectionFailedReason reason;

  constexpr ::GlobalNamespace::ConnectionFailedReason& __get_reason();

  constexpr ::GlobalNamespace::ConnectionFailedReason const& __get_reason() const;

  constexpr void __set_reason(::GlobalNamespace::ConnectionFailedReason value);

  static inline ::GlobalNamespace::ConnectionFailedException* New_ctor(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method .ctor addr 0xdac248 size 0x6c virtual false final false
  inline void _ctor(::GlobalNamespace::ConnectionFailedReason reason);

  static inline ::GlobalNamespace::ConnectionFailedException* New_ctor(::GlobalNamespace::ConnectionFailedReason reason, ::StringW message);

  /// @brief Method .ctor addr 0xdac2b4 size 0x74 virtual false final false
  inline void _ctor(::GlobalNamespace::ConnectionFailedReason reason, ::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionFailedException(ConnectionFailedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionFailedException(ConnectionFailedException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionFailedException();

public:
  /// @brief Field reason, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::ConnectionFailedReason ___reason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectionFailedException, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ConnectionFailedException, ___reason) == 0x8c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConnectionFailedException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionFailedException*, "", "ConnectionFailedException");
