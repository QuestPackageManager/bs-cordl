#pragma once
// IWYU pragma private; include "GlobalNamespace/ConfigSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConfigSerializer)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class ConfigSerializer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConfigSerializer);
// Type: ::ConfigSerializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConfigSerializer*
class CORDL_TYPE ConfigSerializer : public ::System::Object {
public:
  // Declarations
  /// @brief Method LoadConfig, addr 0x24ed054, size 0x560, virtual false, abstract: false, final false
  static inline bool LoadConfig(::System::Object* config, ::StringW filePath);

  static inline ::GlobalNamespace::ConfigSerializer* New_ctor();

  /// @brief Method SaveConfig, addr 0x24ecc24, size 0x430, virtual false, abstract: false, final false
  static inline void SaveConfig(::System::Object* config, ::StringW filePath);

  /// @brief Method .ctor, addr 0x24ed5b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigSerializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigSerializer(ConfigSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigSerializer(ConfigSerializer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConfigSerializer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConfigSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConfigSerializer*, "", "ConfigSerializer");
