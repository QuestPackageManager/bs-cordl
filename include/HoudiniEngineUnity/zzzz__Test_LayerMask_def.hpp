#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
CORDL_MODULE_EXPORT(Test_LayerMask)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_LayerMask;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_LayerMask);
// Type: HoudiniEngineUnity::Test_LayerMask
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::Test_LayerMask*
class CORDL_TYPE Test_LayerMask : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self))::UnityEngine::LayerMask self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LayerMask*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LayerMask*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x23a96a0, size 0xf8, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_LayerMask* other);

  static inline ::HoudiniEngineUnity::Test_LayerMask* New_ctor(::UnityEngine::LayerMask self);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_self() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::UnityEngine::LayerMask value);

  /// @brief Method .ctor, addr 0x23a9678, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::LayerMask self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LayerMask*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LayerMask*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_LayerMask__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_LayerMask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_LayerMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_LayerMask(Test_LayerMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_LayerMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_LayerMask(Test_LayerMask const&) = delete;

  /// @brief Field self, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_LayerMask, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_LayerMask, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_LayerMask);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_LayerMask*, "HoudiniEngineUnity", "Test_LayerMask");
