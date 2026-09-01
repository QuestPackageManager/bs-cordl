#pragma once
// IWYU pragma private; include "GlobalNamespace\ConfigSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConfigSerializer)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class ConfigSerializer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConfigSerializer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConfigSerializer*, "", "ConfigSerializer");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConfigSerializer
class CORDL_TYPE ConfigSerializer : public ::System::Object {
public:
  // Declarations
  /// @brief Method LoadConfig, addr 0x58555fc, size 0x498, virtual false, abstract: false, final false
  static inline bool LoadConfig(::System::Object* config, ::StringW filePath);

  static inline ::GlobalNamespace::ConfigSerializer* New_ctor();

  /// @brief Method SaveConfig, addr 0x5855234, size 0x3c8, virtual false, abstract: false, final false
  static inline void SaveConfig(::System::Object* config, ::StringW filePath);

  /// @brief Method .ctor, addr 0x5855a94, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21400 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ConfigSerializer) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
