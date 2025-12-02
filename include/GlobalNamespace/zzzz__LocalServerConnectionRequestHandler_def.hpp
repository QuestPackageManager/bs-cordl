#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalServerConnectionRequestHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalServerConnectionRequestHandler)
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalServerConnectionRequestHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalServerConnectionRequestHandler);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalServerConnectionRequestHandler
class CORDL_TYPE LocalServerConnectionRequestHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IConnectionRequestHandler"
  constexpr operator ::GlobalNamespace::IConnectionRequestHandler*() noexcept;

  /// @brief Method GetConnectionMessage, addr 0x31ab988, size 0x1b8, virtual true, abstract: false, final true
  inline void GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  static inline ::GlobalNamespace::LocalServerConnectionRequestHandler* New_ctor();

  /// @brief Method ValidateConnectionMessage, addr 0x31abb40, size 0x1fc, virtual true, abstract: false, final true
  inline bool ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ::ByRef<::StringW> userId, ::ByRef<::StringW> userName, ::ByRef<bool> isConnectionOwner);

  /// @brief Method .ctor, addr 0x31a685c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IConnectionRequestHandler"
  constexpr ::GlobalNamespace::IConnectionRequestHandler* i___GlobalNamespace__IConnectionRequestHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalServerConnectionRequestHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalServerConnectionRequestHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalServerConnectionRequestHandler(LocalServerConnectionRequestHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalServerConnectionRequestHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalServerConnectionRequestHandler(LocalServerConnectionRequestHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18972 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalServerConnectionRequestHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalServerConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalServerConnectionRequestHandler*, "", "LocalServerConnectionRequestHandler");
