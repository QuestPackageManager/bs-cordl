#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupCountProviderDefault.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupCountProvider_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightGroupCountProviderDefault)
namespace GlobalNamespace {
struct LightGroupAxis;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupCountProviderDefault;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightGroupCountProviderDefault*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightGroupCountProviderDefault*, "", "LightGroupCountProviderDefault");
// Dependencies LightGroupCountProvider
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupCountProviderDefault
class CORDL_TYPE LightGroupCountProviderDefault : public ::GlobalNamespace::LightGroupCountProvider {
public:
  // Declarations
  /// @brief Field _count, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_numberOfElements)) int32_t numberOfElements;

  /// @brief Method GetColorCount, addr 0x5cba3d0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetColorCount();

  /// @brief Method GetFloatFxCount, addr 0x5cba3d8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetFloatFxCount();

  /// @brief Method GetRotationCount, addr 0x5cba3e0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetRotationCount(::GlobalNamespace::LightGroupAxis axis);

  /// @brief Method GetTranslationCount, addr 0x5cba3e8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetTranslationCount(::GlobalNamespace::LightGroupAxis axis);

  static inline ::GlobalNamespace::LightGroupCountProviderDefault* New_ctor();

  static inline ::GlobalNamespace::LightGroupCountProviderDefault* New_ctor(int32_t count);

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr void __cordl_internal_set__count(int32_t value);

  /// @brief Method .ctor, addr 0x5cb920c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5cba3f0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t count);

  /// @brief Method get_count, addr 0x5cba3c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_numberOfElements, addr 0x5cba3c8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_numberOfElements();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupCountProviderDefault();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderDefault", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupCountProviderDefault(LightGroupCountProviderDefault&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupCountProviderDefault", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupCountProviderDefault(LightGroupCountProviderDefault const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19981 };

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field _count, offset: 0x10, size: 0x4, def value: None
  int32_t ____count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightGroupCountProviderDefault, ____count) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightGroupCountProviderDefault) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
