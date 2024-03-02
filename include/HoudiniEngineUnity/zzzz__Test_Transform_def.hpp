#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Transform)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Transform;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Transform);
// Type: HoudiniEngineUnity::Test_Transform
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::Test_Transform*
class CORDL_TYPE Test_Transform : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self))::UnityW<::UnityEngine::Transform> self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x2346840, size 0x1cc, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Transform* other);

  /// @brief Method IsNull, addr 0x23467e0, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  static inline ::HoudiniEngineUnity::Test_Transform* New_ctor(::UnityEngine::Transform* self);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_self() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x23467b8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform*>* i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_Transform__() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_Transform__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Transform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_Transform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Transform(Test_Transform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Transform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Transform(Test_Transform const&) = delete;

  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Transform, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_Transform, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Transform);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Transform*, "HoudiniEngineUnity", "Test_Transform");
