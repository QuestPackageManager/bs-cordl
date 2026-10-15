#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupCountProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupCountProvider)
namespace GlobalNamespace {
struct LightGroupAxis;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupCountProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightGroupCountProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightGroupCountProvider*, "", "LightGroupCountProvider");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupCountProvider
class CORDL_TYPE LightGroupCountProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_numberOfElements)) int32_t numberOfElements;

  /// @brief Method GetColorCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetColorCount();

  /// @brief Method GetFloatFxCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetFloatFxCount();

  /// @brief Method GetRotationCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetRotationCount(::GlobalNamespace::LightGroupAxis axis);

  /// @brief Method GetTranslationCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetTranslationCount(::GlobalNamespace::LightGroupAxis axis);

  static inline ::GlobalNamespace::LightGroupCountProvider* New_ctor();

  /// @brief Method .ctor, addr 0x5cb9c5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_numberOfElements, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_numberOfElements();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupCountProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProvider", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupCountProvider(LightGroupCountProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProvider", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupCountProvider(LightGroupCountProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19975 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LightGroupCountProvider) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
