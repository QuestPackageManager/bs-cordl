#pragma once
// IWYU pragma private; include "GlobalNamespace/IConnectionRequestHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IConnectionRequestHandler)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IConnectionRequestHandler);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IConnectionRequestHandler
class CORDL_TYPE IConnectionRequestHandler {
public:
  // Declarations
  /// @brief Method GetConnectionMessage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner);

  /// @brief Method ValidateConnectionMessage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ::ByRef<::StringW> userId, ::ByRef<::StringW> userName, ::ByRef<bool> isConnectionOwner);

  // Ctor Parameters [CppParam { name: "", ty: "IConnectionRequestHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConnectionRequestHandler(IConnectionRequestHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14788 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnectionRequestHandler*, "", "IConnectionRequestHandler");
