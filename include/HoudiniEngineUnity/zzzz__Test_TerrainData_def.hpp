#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_TerrainData)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace UnityEngine {
class TerrainData;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_TerrainData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_TerrainData);
// Type: HoudiniEngineUnity::Test_TerrainData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9942))
// CS Name: ::HoudiniEngineUnity::Test_TerrainData*
class CORDL_TYPE Test_TerrainData : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __get_self, put = __set_self))::UnityEngine::TerrainData* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainData*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainData*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainData*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainData*>*() noexcept;

  constexpr ::UnityEngine::TerrainData*& __get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TerrainData*> const& __get_self() const;

  constexpr void __set_self(::UnityEngine::TerrainData* value);

  static inline ::HoudiniEngineUnity::Test_TerrainData* New_ctor(::UnityEngine::TerrainData* self);

  /// @brief Method .ctor addr 0x21e880c size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::TerrainData* self);

  /// @brief Method IsNull addr 0x21e8834 size 0x60 virtual true final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo addr 0x21e8894 size 0x568 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_TerrainData* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_TerrainData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_TerrainData(Test_TerrainData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_TerrainData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_TerrainData(Test_TerrainData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_TerrainData();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TerrainData* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_TerrainData, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_TerrainData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TerrainData*, "HoudiniEngineUnity", "Test_TerrainData");
