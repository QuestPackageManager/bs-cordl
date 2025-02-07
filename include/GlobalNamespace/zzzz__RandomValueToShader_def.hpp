#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomValueToShader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomValueToShader)
namespace System {
class Random;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomValueToShader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomValueToShader);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomValueToShader
class CORDL_TYPE RandomValueToShader : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _lastFrameNum, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameNum, put = __cordl_internal_set__lastFrameNum)) int32_t _lastFrameNum;

  /// @brief Field _random, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Field _randomValueID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__randomValueID, put = setStaticF__randomValueID)) int32_t _randomValueID;

  static inline ::GlobalNamespace::RandomValueToShader* New_ctor();

  /// @brief Method SetRandomSeed, addr 0x39e2928, size 0x68, virtual false, abstract: false, final false
  inline void SetRandomSeed(int32_t seed);

  /// @brief Method SetRandomValueToShaders, addr 0x39e2ad4, size 0xa0, virtual false, abstract: false, final false
  inline void SetRandomValueToShaders();

  constexpr int32_t const& __cordl_internal_get__lastFrameNum() const;

  constexpr int32_t& __cordl_internal_get__lastFrameNum();

  constexpr ::System::Random* const& __cordl_internal_get__random() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr void __cordl_internal_set__lastFrameNum(int32_t value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  /// @brief Method .ctor, addr 0x39e2b7c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__randomValueID();

  static inline void setStaticF__randomValueID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomValueToShader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomValueToShader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomValueToShader(RandomValueToShader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomValueToShader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomValueToShader(RandomValueToShader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16278 };

  /// @brief Field _random, offset: 0x18, size: 0x8, def value: None
  ::System::Random* ____random;

  /// @brief Field _lastFrameNum, offset: 0x20, size: 0x4, def value: None
  int32_t ____lastFrameNum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RandomValueToShader, ____random) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RandomValueToShader, ____lastFrameNum) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomValueToShader, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomValueToShader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomValueToShader*, "", "RandomValueToShader");
