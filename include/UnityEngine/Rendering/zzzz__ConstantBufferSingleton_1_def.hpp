#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ConstantBufferSingleton_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ConstantBuffer_1_def.hpp"
CORDL_MODULE_EXPORT(ConstantBufferSingleton_1)
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename CBType> class ConstantBufferSingleton_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::ConstantBufferSingleton_1);
// Dependencies UnityEngine.Rendering.ConstantBuffer`1<CBType>
namespace UnityEngine::Rendering {
// cpp template
template <typename CBType>
// Is value type: false
// CS Name: UnityEngine.Rendering.ConstantBufferSingleton`1<CBType>
class CORDL_TYPE ConstantBufferSingleton_1 : public ::UnityEngine::Rendering::ConstantBuffer_1<CBType> {
public:
  // Declarations
  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* s_Instance;

  static inline ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* get_instance();

  static inline void setStaticF_s_Instance(::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* value);

  /// @brief Method set_instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void set_instance(::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstantBufferSingleton_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstantBufferSingleton_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstantBufferSingleton_1(ConstantBufferSingleton_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstantBufferSingleton_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstantBufferSingleton_1(ConstantBufferSingleton_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11857 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::ConstantBufferSingleton_1, "UnityEngine.Rendering", "ConstantBufferSingleton`1");
