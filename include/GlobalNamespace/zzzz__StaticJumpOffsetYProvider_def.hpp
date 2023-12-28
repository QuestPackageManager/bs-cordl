#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StaticJumpOffsetYProvider)
namespace GlobalNamespace {
class __StaticJumpOffsetYProvider__InitData;
}
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticJumpOffsetYProvider;
}
namespace GlobalNamespace {
class __StaticJumpOffsetYProvider__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticJumpOffsetYProvider);
MARK_REF_PTR_T(::GlobalNamespace::__StaticJumpOffsetYProvider__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4828))
// CS Name: ::StaticJumpOffsetYProvider::InitData*
class CORDL_TYPE __StaticJumpOffsetYProvider__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field jumpyYOffset, offset 0x10, size 0x4
  __declspec(property(get = __get_jumpyYOffset, put = __set_jumpyYOffset)) float_t jumpyYOffset;

  constexpr float_t& __get_jumpyYOffset();

  constexpr float_t const& __get_jumpyYOffset() const;

  constexpr void __set_jumpyYOffset(float_t value);

  static inline ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData* New_ctor(float_t jumpyYOffset);

  /// @brief Method .ctor addr 0x2395bc8 size 0x28 virtual false final false
  inline void _ctor(float_t jumpyYOffset);

  // Ctor Parameters [CppParam { name: "", ty: "__StaticJumpOffsetYProvider__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StaticJumpOffsetYProvider__InitData(__StaticJumpOffsetYProvider__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StaticJumpOffsetYProvider__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StaticJumpOffsetYProvider__InitData(__StaticJumpOffsetYProvider__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StaticJumpOffsetYProvider__InitData();

public:
  /// @brief Field jumpyYOffset, offset: 0x10, size: 0x4, def value: None
  float_t ___jumpyYOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StaticJumpOffsetYProvider__InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::StaticJumpOffsetYProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4829))
// CS Name: ::StaticJumpOffsetYProvider*
class CORDL_TYPE StaticJumpOffsetYProvider : public ::System::Object {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData;

  /// @brief Field _initData, offset 0x10, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__StaticJumpOffsetYProvider__InitData* _initData;

  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  /// @brief Convert operator to "::GlobalNamespace::IJumpOffsetYProvider"
  constexpr operator ::GlobalNamespace::IJumpOffsetYProvider*() noexcept;

  constexpr ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__StaticJumpOffsetYProvider__InitData* value);

  /// @brief Method get_jumpOffsetY addr 0x2395ba4 size 0x1c virtual true final true
  inline float_t get_jumpOffsetY();

  static inline ::GlobalNamespace::StaticJumpOffsetYProvider* New_ctor();

  /// @brief Method .ctor addr 0x2395bc0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StaticJumpOffsetYProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticJumpOffsetYProvider(StaticJumpOffsetYProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticJumpOffsetYProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticJumpOffsetYProvider(StaticJumpOffsetYProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticJumpOffsetYProvider();

public:
  /// @brief Field _initData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__StaticJumpOffsetYProvider__InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticJumpOffsetYProvider, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticJumpOffsetYProvider*, "", "StaticJumpOffsetYProvider");
NEED_NO_BOX(::GlobalNamespace::__StaticJumpOffsetYProvider__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StaticJumpOffsetYProvider__InitData*, "", "StaticJumpOffsetYProvider/InitData");
