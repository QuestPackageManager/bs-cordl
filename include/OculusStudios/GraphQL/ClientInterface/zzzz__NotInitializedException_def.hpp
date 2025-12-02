#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/NotInitializedException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotInitializedException)
namespace System {
class Exception;
}
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class NotInitializedException;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::NotInitializedException);
// Dependencies System.Exception
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.NotInitializedException
class CORDL_TYPE NotInitializedException : public ::System::Exception {
public:
  // Declarations
  static inline ::OculusStudios::GraphQL::ClientInterface::NotInitializedException* New_ctor();

  static inline ::OculusStudios::GraphQL::ClientInterface::NotInitializedException* New_ctor(::StringW message);

  static inline ::OculusStudios::GraphQL::ClientInterface::NotInitializedException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x5d1736c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5d173c4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5d17430, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotInitializedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotInitializedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotInitializedException(NotInitializedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotInitializedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotInitializedException(NotInitializedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22435 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::ClientInterface::NotInitializedException, 0x90>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::NotInitializedException);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::NotInitializedException*, "OculusStudios.GraphQL.ClientInterface", "NotInitializedException");
