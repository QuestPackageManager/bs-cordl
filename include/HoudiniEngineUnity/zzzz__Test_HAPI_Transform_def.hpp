#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_HAPI_Transform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_Transform)
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_Transform;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_Transform);
// Dependencies HoudiniEngineUnity.HAPI_Transform, HoudiniEngineUnity.IEquivable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_HAPI_Transform
class CORDL_TYPE Test_HAPI_Transform : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) ::HoudiniEngineUnity::HAPI_Transform self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a9981c, size 0x200, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_Transform* other);

  static inline ::HoudiniEngineUnity::Test_HAPI_Transform* New_ctor(::HoudiniEngineUnity::HAPI_Transform self);

  constexpr ::HoudiniEngineUnity::HAPI_Transform const& __cordl_internal_get_self() const;

  constexpr ::HoudiniEngineUnity::HAPI_Transform& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::HoudiniEngineUnity::HAPI_Transform value);

  /// @brief Method .ctor, addr 0x3a997e8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_Transform self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_HAPI_Transform__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_Transform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_Transform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_Transform(Test_HAPI_Transform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_Transform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_Transform(Test_HAPI_Transform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11879 };

  /// @brief Field self, offset: 0x10, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_Transform ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::Test_HAPI_Transform, ___self) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_Transform, 0x38>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_Transform);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_Transform*, "HoudiniEngineUnity", "Test_HAPI_Transform");
