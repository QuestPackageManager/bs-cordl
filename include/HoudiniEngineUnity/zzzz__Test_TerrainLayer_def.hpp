#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_TerrainLayer)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class TerrainLayer;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_TerrainLayer;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_TerrainLayer);
// Type: HoudiniEngineUnity::Test_TerrainLayer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9933))
// CS Name: ::HoudiniEngineUnity::Test_TerrainLayer*
class CORDL_TYPE Test_TerrainLayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __get_self, put = __set_self))::UnityEngine::TerrainLayer* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainLayer*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainLayer*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainLayer*>*() noexcept;

  constexpr ::UnityEngine::TerrainLayer*& __get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TerrainLayer*> const& __get_self() const;

  constexpr void __set_self(::UnityEngine::TerrainLayer* value);

  static inline ::HoudiniEngineUnity::Test_TerrainLayer* New_ctor(::UnityEngine::TerrainLayer* self);

  /// @brief Method .ctor addr 0x21e7430 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::TerrainLayer* self);

  /// @brief Method IsNull addr 0x21e7458 size 0x60 virtual true final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo addr 0x21e74b8 size 0x464 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_TerrainLayer* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_TerrainLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_TerrainLayer(Test_TerrainLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_TerrainLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_TerrainLayer(Test_TerrainLayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_TerrainLayer();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TerrainLayer* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_TerrainLayer, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_TerrainLayer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TerrainLayer*, "HoudiniEngineUnity", "Test_TerrainLayer");
