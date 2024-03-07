#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_LODGroup)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class LODGroup;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_LODGroup;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_LODGroup);
// Type: HoudiniEngineUnity::Test_LODGroup
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::Test_LODGroup*
class CORDL_TYPE Test_LODGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self))::UnityW<::UnityEngine::LODGroup> self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x23a6fdc, size 0x28c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_LODGroup* other);

  /// @brief Method IsNull, addr 0x23a6f7c, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  static inline ::HoudiniEngineUnity::Test_LODGroup* New_ctor(::UnityEngine::LODGroup* self);

  constexpr ::UnityW<::UnityEngine::LODGroup> const& __cordl_internal_get_self() const;

  constexpr ::UnityW<::UnityEngine::LODGroup>& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::UnityW<::UnityEngine::LODGroup> value);

  /// @brief Method .ctor, addr 0x23a6f54, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::LODGroup* self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>* i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_LODGroup__() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_LODGroup__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_LODGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_LODGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_LODGroup(Test_LODGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_LODGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_LODGroup(Test_LODGroup const&) = delete;

  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LODGroup> ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_LODGroup, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_LODGroup, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_LODGroup);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_LODGroup*, "HoudiniEngineUnity", "Test_LODGroup");
