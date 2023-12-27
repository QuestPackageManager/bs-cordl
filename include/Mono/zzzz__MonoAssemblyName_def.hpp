#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/zzzz__MonoAssemblyName_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoAssemblyName)
namespace Mono {
struct __MonoAssemblyName___public_key_token_e__FixedBuffer;
}
// Forward declare root types
namespace Mono {
struct MonoAssemblyName;
}
namespace Mono {
struct __MonoAssemblyName___public_key_token_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::Mono::MonoAssemblyName);
MARK_VAL_T(::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer);
// Type: ::<public_key_token>e__FixedBuffer
// SizeInfo { instance_size: 17, native_size: 17, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2240))
// CS Name: ::MonoAssemblyName::<public_key_token>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __MonoAssemblyName___public_key_token_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __MonoAssemblyName___public_key_token_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MonoAssemblyName___public_key_token_e__FixedBuffer();

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x11 - 0x1 = 0x10, packed as 0x10
  uint8_t _cordl_size_padding[0x10];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x11 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer, 0x11>, "Size mismatch!");

} // namespace Mono
// Type: Mono::MonoAssemblyName
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2240)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2241))
// CS Name: ::Mono::MonoAssemblyName
struct CORDL_TYPE MonoAssemblyName {
public:
  // Declarations
  using _public_key_token_e__FixedBuffer = ::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer;

  // Ctor Parameters [CppParam { name: "name", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "culture", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "hash_value",
  // ty: "void*", modifiers: "", def_value: None }, CppParam { name: "public_key", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "public_key_token", ty:
  // "::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "hash_alg", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "hash_len", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "major", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "build", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "revision", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "arch", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr MonoAssemblyName(void* name, void* culture, void* hash_value, void* public_key, ::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer public_key_token, uint32_t hash_alg,
                             uint32_t hash_len, uint32_t flags, uint16_t major, uint16_t minor, uint16_t build, uint16_t revision, uint16_t arch) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoAssemblyName();

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  void* name;

  /// @brief Field culture, offset: 0x8, size: 0x8, def value: None
  void* culture;

  /// @brief Field hash_value, offset: 0x10, size: 0x8, def value: None
  void* hash_value;

  /// @brief Field public_key, offset: 0x18, size: 0x8, def value: None
  void* public_key;

  /// @brief Field public_key_token, offset: 0x20, size: 0x11, def value: None
  ::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer public_key_token;

  /// @brief Field hash_alg, offset: 0x34, size: 0x4, def value: None
  uint32_t hash_alg;

  /// @brief Field hash_len, offset: 0x38, size: 0x4, def value: None
  uint32_t hash_len;

  /// @brief Field flags, offset: 0x3c, size: 0x4, def value: None
  uint32_t flags;

  /// @brief Field major, offset: 0x40, size: 0x2, def value: None
  uint16_t major;

  /// @brief Field minor, offset: 0x42, size: 0x2, def value: None
  uint16_t minor;

  /// @brief Field build, offset: 0x44, size: 0x2, def value: None
  uint16_t build;

  /// @brief Field revision, offset: 0x46, size: 0x2, def value: None
  uint16_t revision;

  /// @brief Field arch, offset: 0x48, size: 0x2, def value: None
  uint16_t arch;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::MonoAssemblyName, 0x50>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::MonoAssemblyName, "Mono", "MonoAssemblyName");
DEFINE_IL2CPP_ARG_TYPE(::Mono::__MonoAssemblyName___public_key_token_e__FixedBuffer, "Mono", "MonoAssemblyName/<public_key_token>e__FixedBuffer");
