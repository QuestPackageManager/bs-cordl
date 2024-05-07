#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_TreeInstance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
CORDL_MODULE_EXPORT(Test_TreeInstance)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
struct TreeInstance;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_TreeInstance;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_TreeInstance);
// Type: HoudiniEngineUnity::Test_TreeInstance
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::Test_TreeInstance*
class CORDL_TYPE Test_TreeInstance : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self))::UnityEngine::TreeInstance self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TreeInstance*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TreeInstance*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x25cc0f4, size 0x21c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_TreeInstance* other);

  static inline ::HoudiniEngineUnity::Test_TreeInstance* New_ctor(::UnityEngine::TreeInstance self);

  constexpr ::UnityEngine::TreeInstance const& __cordl_internal_get_self() const;

  constexpr ::UnityEngine::TreeInstance& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::UnityEngine::TreeInstance value);

  /// @brief Method .ctor, addr 0x25cc0c0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TreeInstance self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TreeInstance*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TreeInstance*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_TreeInstance__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_TreeInstance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_TreeInstance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_TreeInstance(Test_TreeInstance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_TreeInstance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_TreeInstance(Test_TreeInstance const&) = delete;

  /// @brief Field self, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::TreeInstance ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_TreeInstance, 0x38>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_TreeInstance, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_TreeInstance);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TreeInstance*, "HoudiniEngineUnity", "Test_TreeInstance");
