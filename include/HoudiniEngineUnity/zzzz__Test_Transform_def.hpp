#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_Transform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Transform)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Transform;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Transform);
// Dependencies HoudiniEngineUnity.IEquivableWrapperClass`1<T>, HoudiniEngineUnity.IEquivable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_Transform
class CORDL_TYPE Test_Transform : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) ::UnityW<::UnityEngine::Transform> self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Transform*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Transform*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a9da3c, size 0x1cc, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Transform* other);

  /// @brief Method IsNull, addr 0x3a9d9dc, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  static inline ::HoudiniEngineUnity::Test_Transform* New_ctor(::UnityEngine::Transform* self);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_self() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3a9d9b4, size 0x28, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11893 };

  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::Test_Transform, ___self) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Transform, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Transform);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Transform*, "HoudiniEngineUnity", "Test_Transform");
