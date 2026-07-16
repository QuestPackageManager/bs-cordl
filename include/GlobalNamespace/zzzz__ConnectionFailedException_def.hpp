#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectionFailedException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConnectionFailedException)
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionFailedException;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConnectionFailedException*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConnectionFailedException*, "", "ConnectionFailedException");
// Dependencies ConnectionFailedReason, System.Exception
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConnectionFailedException
class CORDL_TYPE ConnectionFailedException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field reason, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_reason, put = __cordl_internal_set_reason)) ::GlobalNamespace::ConnectionFailedReason reason;

  static inline ::GlobalNamespace::ConnectionFailedException* New_ctor(::GlobalNamespace::ConnectionFailedReason reason);

  static inline ::GlobalNamespace::ConnectionFailedException* New_ctor(::GlobalNamespace::ConnectionFailedReason reason, ::StringW message);

  constexpr ::GlobalNamespace::ConnectionFailedReason const& __cordl_internal_get_reason() const;

  constexpr ::GlobalNamespace::ConnectionFailedReason& __cordl_internal_get_reason();

  constexpr void __cordl_internal_set_reason(::GlobalNamespace::ConnectionFailedReason value);

  /// @brief Method .ctor, addr 0x332be3c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method .ctor, addr 0x332bea8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ConnectionFailedReason reason, ::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionFailedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionFailedException(ConnectionFailedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionFailedException(ConnectionFailedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18104 };

  /// @brief Field reason, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::ConnectionFailedReason ___reason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConnectionFailedException, ___reason) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConnectionFailedException) == 0x90, "Size mismatch!");

} // namespace GlobalNamespace
