#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticJumpOffsetYProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StaticJumpOffsetYProvider)
namespace GlobalNamespace {
class StaticJumpOffsetYProvider_InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticJumpOffsetYProvider;
}
namespace GlobalNamespace {
class StaticJumpOffsetYProvider_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticJumpOffsetYProvider);
MARK_REF_PTR_T(::GlobalNamespace::StaticJumpOffsetYProvider_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticJumpOffsetYProvider/InitData
class CORDL_TYPE StaticJumpOffsetYProvider_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field jumpyYOffset, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_jumpyYOffset, put = __cordl_internal_set_jumpyYOffset)) float_t jumpyYOffset;

  static inline ::GlobalNamespace::StaticJumpOffsetYProvider_InitData* New_ctor(float_t jumpyYOffset);

  constexpr float_t const& __cordl_internal_get_jumpyYOffset() const;

  constexpr float_t& __cordl_internal_get_jumpyYOffset();

  constexpr void __cordl_internal_set_jumpyYOffset(float_t value);

  /// @brief Method .ctor, addr 0x3b7d1e8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t jumpyYOffset);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticJumpOffsetYProvider_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticJumpOffsetYProvider_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticJumpOffsetYProvider_InitData(StaticJumpOffsetYProvider_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticJumpOffsetYProvider_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticJumpOffsetYProvider_InitData(StaticJumpOffsetYProvider_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4183 };

  /// @brief Field jumpyYOffset, offset: 0x10, size: 0x4, def value: None
  float_t ___jumpyYOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StaticJumpOffsetYProvider_InitData, ___jumpyYOffset) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticJumpOffsetYProvider_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IJumpOffsetYProvider, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticJumpOffsetYProvider
class CORDL_TYPE StaticJumpOffsetYProvider : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::StaticJumpOffsetYProvider_InitData;

  /// @brief Field _initData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::StaticJumpOffsetYProvider_InitData* _initData;

  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  /// @brief Convert operator to "::GlobalNamespace::IJumpOffsetYProvider"
  constexpr operator ::GlobalNamespace::IJumpOffsetYProvider*() noexcept;

  static inline ::GlobalNamespace::StaticJumpOffsetYProvider* New_ctor();

  constexpr ::GlobalNamespace::StaticJumpOffsetYProvider_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::StaticJumpOffsetYProvider_InitData*& __cordl_internal_get__initData();

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::StaticJumpOffsetYProvider_InitData* value);

  /// @brief Method .ctor, addr 0x3b7d1e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_jumpOffsetY, addr 0x3b7d1c4, size 0x1c, virtual true, abstract: false, final true
  inline float_t get_jumpOffsetY();

  /// @brief Convert to "::GlobalNamespace::IJumpOffsetYProvider"
  constexpr ::GlobalNamespace::IJumpOffsetYProvider* i___GlobalNamespace__IJumpOffsetYProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticJumpOffsetYProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticJumpOffsetYProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticJumpOffsetYProvider(StaticJumpOffsetYProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticJumpOffsetYProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticJumpOffsetYProvider(StaticJumpOffsetYProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4184 };

  /// @brief Field _initData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::StaticJumpOffsetYProvider_InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StaticJumpOffsetYProvider, ____initData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticJumpOffsetYProvider, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticJumpOffsetYProvider*, "", "StaticJumpOffsetYProvider");
NEED_NO_BOX(::GlobalNamespace::StaticJumpOffsetYProvider_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticJumpOffsetYProvider_InitData*, "", "StaticJumpOffsetYProvider/InitData");
