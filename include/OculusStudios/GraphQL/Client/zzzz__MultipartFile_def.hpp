#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/MultipartFile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultipartFile)
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
struct MultipartFile;
}
// Write type traits
MARK_VAL_T(::OculusStudios::GraphQL::Client::MultipartFile);
// Dependencies
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.MultipartFile
struct CORDL_TYPE MultipartFile {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultipartFile();

  // Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "bytes", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "contentType", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr MultipartFile(::StringW key, ::StringW filename, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::StringW contentType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20207 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field filename, offset: 0x8, size: 0x8, def value: None
  ::StringW filename;

  /// @brief Field bytes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  /// @brief Field contentType, offset: 0x18, size: 0x8, def value: None
  ::StringW contentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::MultipartFile, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::MultipartFile, filename) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::MultipartFile, bytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::MultipartFile, contentType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::MultipartFile, 0x20>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::MultipartFile, "OculusStudios.GraphQL.Client", "MultipartFile");
