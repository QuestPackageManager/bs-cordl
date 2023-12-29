#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_Transform)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_Transform;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_Transform);
// Type: HoudiniEngineUnity::Test_HAPI_Transform
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9653)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9821))
// CS Name: ::HoudiniEngineUnity::Test_HAPI_Transform*
class CORDL_TYPE Test_HAPI_Transform : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x28
  __declspec(property(get = __get_self, put = __set_self))::HoudiniEngineUnity::HAPI_Transform self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_Transform*>*() noexcept;

  constexpr ::HoudiniEngineUnity::HAPI_Transform& __get_self();

  constexpr ::HoudiniEngineUnity::HAPI_Transform const& __get_self() const;

  constexpr void __set_self(::HoudiniEngineUnity::HAPI_Transform value);

  static inline ::HoudiniEngineUnity::Test_HAPI_Transform* New_ctor(::HoudiniEngineUnity::HAPI_Transform self);

  /// @brief Method .ctor addr 0x208a518 size 0x34 virtual false final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_Transform self);

  /// @brief Method IsEquivalentTo addr 0x208a54c size 0x200 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_Transform* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_Transform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_Transform(Test_HAPI_Transform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_Transform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_Transform(Test_HAPI_Transform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_Transform();

public:
  /// @brief Field self, offset: 0x10, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_Transform ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_Transform, 0x38>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_HAPI_Transform, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_Transform);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_Transform*, "HoudiniEngineUnity", "Test_HAPI_Transform");
