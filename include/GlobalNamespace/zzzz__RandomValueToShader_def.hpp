#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomValueToShader)
// Forward declare root types
namespace GlobalNamespace {
class RandomValueToShader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomValueToShader);
// Type: ::RandomValueToShader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14495))
// CS Name: ::RandomValueToShader*
class CORDL_TYPE RandomValueToShader : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _lastFrameNum, offset 0x18, size 0x4
  __declspec(property(get = __get__lastFrameNum, put = __set__lastFrameNum)) int32_t _lastFrameNum;

  /// @brief Field _randomValueID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__randomValueID, put = setStaticF__randomValueID)) int32_t _randomValueID;

  constexpr int32_t& __get__lastFrameNum();

  constexpr int32_t const& __get__lastFrameNum() const;

  constexpr void __set__lastFrameNum(int32_t value);

  static inline void setStaticF__randomValueID(int32_t value);

  static inline int32_t getStaticF__randomValueID();

  /// @brief Method SetRandomValueToShaders, addr 0x210b188, size 0x8c, virtual false, abstract: false, final false
  inline void SetRandomValueToShaders();

  static inline ::GlobalNamespace::RandomValueToShader* New_ctor();

  /// @brief Method .ctor, addr 0x210b21c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RandomValueToShader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomValueToShader(RandomValueToShader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomValueToShader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomValueToShader(RandomValueToShader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomValueToShader();

public:
  /// @brief Field _lastFrameNum, offset: 0x18, size: 0x4, def value: None
  int32_t ____lastFrameNum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomValueToShader, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomValueToShader, ____lastFrameNum) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomValueToShader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomValueToShader*, "", "RandomValueToShader");
