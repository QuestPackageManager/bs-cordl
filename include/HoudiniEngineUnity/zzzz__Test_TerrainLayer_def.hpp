#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_TerrainLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_TerrainLayer)
namespace UnityEngine {
class TerrainLayer;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_TerrainLayer;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_TerrainLayer);
// Dependencies HoudiniEngineUnity.IEquivableWrapperClass`1<T>, HoudiniEngineUnity.IEquivable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_TerrainLayer
class CORDL_TYPE Test_TerrainLayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) ::UnityW<::UnityEngine::TerrainLayer> self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainLayer*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainLayer*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a9afb4, size 0x464, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_TerrainLayer* other);

  /// @brief Method IsNull, addr 0x3a9af54, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  static inline ::HoudiniEngineUnity::Test_TerrainLayer* New_ctor(::UnityEngine::TerrainLayer* self);

  constexpr ::UnityW<::UnityEngine::TerrainLayer> const& __cordl_internal_get_self() const;

  constexpr ::UnityW<::UnityEngine::TerrainLayer>& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::UnityW<::UnityEngine::TerrainLayer> value);

  /// @brief Method .ctor, addr 0x3a9af2c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TerrainLayer* self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>*
  i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_TerrainLayer__() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainLayer*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainLayer*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_TerrainLayer__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_TerrainLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_TerrainLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_TerrainLayer(Test_TerrainLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_TerrainLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_TerrainLayer(Test_TerrainLayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11920 };

  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TerrainLayer> ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::Test_TerrainLayer, ___self) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_TerrainLayer, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_TerrainLayer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TerrainLayer*, "HoudiniEngineUnity", "Test_TerrainLayer");
