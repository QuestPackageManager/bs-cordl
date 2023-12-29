#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlock)
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MaterialPropertyBlock);
// Type: UnityEngine::MaterialPropertyBlock
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10022))
// CS Name: ::UnityEngine::MaterialPropertyBlock*
class CORDL_TYPE MaterialPropertyBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Ptr, put = __set_m_Ptr)) void* m_Ptr;

  constexpr void*& __get_m_Ptr();

  constexpr void* const& __get_m_Ptr() const;

  constexpr void __set_m_Ptr(void* value);

  /// @brief Method SetFloatArray addr 0x2b51ee8 size 0x118 virtual false final false
  inline void SetFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetVectorArray addr 0x2b5205c size 0x118 virtual false final false
  inline void SetVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetMatrixArray addr 0x2b521d0 size 0x118 virtual false final false
  inline void SetMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  static inline ::UnityEngine::MaterialPropertyBlock* New_ctor();

  /// @brief Method .ctor addr 0x2b52344 size 0x48 virtual false final false
  inline void _ctor();

  /// @brief Method Finalize addr 0x2b523b4 size 0x94 virtual true final false
  inline void Finalize();

  /// @brief Method Dispose addr 0x2b52448 size 0xcc virtual false final false
  inline void Dispose();

  /// @brief Method SetInt addr 0x2b52550 size 0x54 virtual false final false
  inline void SetInt(int32_t nameID, int32_t value);

  /// @brief Method SetFloat addr 0x2b525f8 size 0x54 virtual false final false
  inline void SetFloat(int32_t nameID, float_t value);

  /// @brief Method SetVector addr 0x2b5264c size 0x4 virtual false final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetColor addr 0x2b526ac size 0x7c virtual false final false
  inline void SetColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetColor addr 0x2b527c0 size 0x4 virtual false final false
  inline void SetColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetTexture addr 0x2b527c4 size 0x54 virtual false final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetFloatArray addr 0x2b5286c size 0x80 virtual false final false
  inline void SetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArray addr 0x2b528ec size 0x18 virtual false final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetVectorArray addr 0x2b52904 size 0x18 virtual false final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetMatrixArray addr 0x2b5291c size 0x18 virtual false final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method GetFloat addr 0x2b52934 size 0x44 virtual false final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetVector addr 0x2b529bc size 0x4 virtual false final false
  inline ::UnityEngine::Vector4 GetVector(int32_t nameID);

  /// @brief Method GetColor addr 0x2b52a20 size 0x4 virtual false final false
  inline ::UnityEngine::Color GetColor(int32_t nameID);

  /// @brief Method GetMatrix addr 0x2b52a84 size 0x8c virtual false final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(int32_t nameID);

  /// @brief Method GetFloatImpl addr 0x2b52978 size 0x44 virtual false final false
  inline float_t GetFloatImpl(int32_t name);

  /// @brief Method GetVectorImpl addr 0x2b529c0 size 0x60 virtual false final false
  inline ::UnityEngine::Vector4 GetVectorImpl(int32_t name);

  /// @brief Method GetColorImpl addr 0x2b52a24 size 0x60 virtual false final false
  inline ::UnityEngine::Color GetColorImpl(int32_t name);

  /// @brief Method GetMatrixImpl addr 0x2b52b10 size 0x7c virtual false final false
  inline ::UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name);

  /// @brief Method SetFloatImpl addr 0x2b525a4 size 0x54 virtual false final false
  inline void SetFloatImpl(int32_t name, float_t value);

  /// @brief Method SetVectorImpl addr 0x2b52650 size 0x5c virtual false final false
  inline void SetVectorImpl(int32_t name, ::UnityEngine::Vector4 value);

  /// @brief Method SetColorImpl addr 0x2b52764 size 0x5c virtual false final false
  inline void SetColorImpl(int32_t name, ::UnityEngine::Color value);

  /// @brief Method SetTextureImpl addr 0x2b52818 size 0x54 virtual false final false
  inline void SetTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetFloatArrayImpl addr 0x2b52000 size 0x5c virtual false final false
  inline void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetVectorArrayImpl addr 0x2b52174 size 0x5c virtual false final false
  inline void SetVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetMatrixArrayImpl addr 0x2b522e8 size 0x5c virtual false final false
  inline void SetMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method CreateImpl addr 0x2b5238c size 0x28 virtual false final false
  static inline void* CreateImpl();

  /// @brief Method DestroyImpl addr 0x2b52514 size 0x3c virtual false final false
  static inline void DestroyImpl(void* mpb);

  /// @brief Method Clear addr 0x2b52d30 size 0x44 virtual false final false
  inline void Clear(bool keepMemory);

  /// @brief Method Clear addr 0x2b52d74 size 0x40 virtual false final false
  inline void Clear();

  /// @brief Method GetVectorImpl_Injected addr 0x2b52b8c size 0x54 virtual false final false
  inline void GetVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method GetColorImpl_Injected addr 0x2b52be0 size 0x54 virtual false final false
  inline void GetColorImpl_Injected(int32_t name, ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetMatrixImpl_Injected addr 0x2b52c34 size 0x54 virtual false final false
  inline void GetMatrixImpl_Injected(int32_t name, ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method SetVectorImpl_Injected addr 0x2b52c88 size 0x54 virtual false final false
  inline void SetVectorImpl_Injected(int32_t name, ByRef<::UnityEngine::Vector4> value);

  /// @brief Method SetColorImpl_Injected addr 0x2b52cdc size 0x54 virtual false final false
  inline void SetColorImpl_Injected(int32_t name, ByRef<::UnityEngine::Color> value);

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlock(MaterialPropertyBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlock(MaterialPropertyBlock const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlock();

public:
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MaterialPropertyBlock, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::MaterialPropertyBlock, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MaterialPropertyBlock);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MaterialPropertyBlock*, "UnityEngine", "MaterialPropertyBlock");
