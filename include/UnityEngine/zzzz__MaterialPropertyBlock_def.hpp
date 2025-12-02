#pragma once
// IWYU pragma private; include "UnityEngine/MaterialPropertyBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlock)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock_BindingsMarshaller;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MaterialPropertyBlock_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MaterialPropertyBlock);
MARK_REF_PTR_T(::UnityEngine::MaterialPropertyBlock_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MaterialPropertyBlock/BindingsMarshaller
class CORDL_TYPE MaterialPropertyBlock_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x685bfbc, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlock_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlock_BindingsMarshaller(MaterialPropertyBlock_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlock_BindingsMarshaller(MaterialPropertyBlock_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10130 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MaterialPropertyBlock_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MaterialPropertyBlock
class CORDL_TYPE MaterialPropertyBlock : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::MaterialPropertyBlock_BindingsMarshaller;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Method Clear, addr 0x685b788, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x685b6ec, size 0x58, virtual false, abstract: false, final false
  inline void Clear(bool keepMemory);

  /// @brief Method Clear_Injected, addr 0x685b744, size 0x44, virtual false, abstract: false, final false
  static inline void Clear_Injected(::System::IntPtr _unity_self, bool keepMemory);

  /// @brief Method CreateImpl, addr 0x685b688, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateImpl();

  /// @brief Method DestroyImpl, addr 0x685b6b0, size 0x3c, virtual false, abstract: false, final false
  static inline void DestroyImpl(::System::IntPtr mpb);

  /// @brief Method Dispose, addr 0x685ba48, size 0x90, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Finalize, addr 0x685ba04, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetColor, addr 0x685bf88, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(int32_t nameID);

  /// @brief Method GetColorImpl, addr 0x685a8c4, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColorImpl(int32_t name);

  /// @brief Method GetColorImpl_Injected, addr 0x685a938, size 0x54, virtual false, abstract: false, final false
  static inline void GetColorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetFloat, addr 0x685bf80, size 0x4, virtual false, abstract: false, final false
  inline float_t GetFloat(int32_t nameID);

  /// @brief Method GetFloatImpl, addr 0x685a760, size 0x58, virtual false, abstract: false, final false
  inline float_t GetFloatImpl(int32_t name);

  /// @brief Method GetFloatImpl_Injected, addr 0x685a7b8, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name);

  /// @brief Method GetMatrix, addr 0x685bf8c, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrix(int32_t nameID);

  /// @brief Method GetMatrixImpl, addr 0x685a98c, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name);

  /// @brief Method GetMatrixImpl_Injected, addr 0x685aa1c, size 0x54, virtual false, abstract: false, final false
  static inline void GetMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method GetVector, addr 0x685bf84, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector(int32_t nameID);

  /// @brief Method GetVectorImpl, addr 0x685a7fc, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVectorImpl(int32_t name);

  /// @brief Method GetVectorImpl_Injected, addr 0x685a870, size 0x54, virtual false, abstract: false, final false
  static inline void GetVectorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Vector4> ret);

  static inline ::UnityEngine::MaterialPropertyBlock* New_ctor();

  /// @brief Method SetBuffer, addr 0x685bd94, size 0x30, virtual false, abstract: false, final false
  inline void SetBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBufferImpl, addr 0x685b09c, size 0x74, virtual false, abstract: false, final false
  inline void SetBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetBufferImpl_Injected, addr 0x685b110, size 0x54, virtual false, abstract: false, final false
  static inline void SetBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetColor, addr 0x685bcc8, size 0x50, virtual false, abstract: false, final false
  inline void SetColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetColor, addr 0x685bd18, size 0x4, virtual false, abstract: false, final false
  inline void SetColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetColorImpl, addr 0x685acac, size 0x70, virtual false, abstract: false, final false
  inline void SetColorImpl(int32_t name, ::UnityEngine::Color value);

  /// @brief Method SetColorImpl_Injected, addr 0x685ad1c, size 0x54, virtual false, abstract: false, final false
  static inline void SetColorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Color> value);

  /// @brief Method SetConstantBuffer, addr 0x685bdfc, size 0x4, virtual false, abstract: false, final false
  inline void SetConstantBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferImpl, addr 0x685b164, size 0x8c, virtual false, abstract: false, final false
  inline void SetConstantBufferImpl(int32_t name, ::UnityEngine::ComputeBuffer* value, int32_t offset, int32_t size);

  /// @brief Method SetConstantBufferImpl_Injected, addr 0x685b1f0, size 0x6c, virtual false, abstract: false, final false
  static inline void SetConstantBufferImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, int32_t offset, int32_t size);

  /// @brief Method SetFloat, addr 0x685bc3c, size 0x30, virtual false, abstract: false, final false
  inline void SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat, addr 0x685bc6c, size 0x4, virtual false, abstract: false, final false
  inline void SetFloat(int32_t nameID, float_t value);

  /// @brief Method SetFloatArray, addr 0x685be90, size 0x3c, virtual false, abstract: false, final false
  inline void SetFloatArray(::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetFloatArray, addr 0x685b790, size 0xbc, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetFloatArray, addr 0x685becc, size 0x14, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetFloatArray, addr 0x685be00, size 0x90, virtual false, abstract: false, final false
  inline void SetFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetFloatArrayImpl, addr 0x685b25c, size 0x108, virtual false, abstract: false, final false
  inline void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t, ::Array<float_t>*> values, int32_t count);

  /// @brief Method SetFloatArrayImpl_Injected, addr 0x685b364, size 0x5c, virtual false, abstract: false, final false
  static inline void SetFloatArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetFloatImpl, addr 0x685ab2c, size 0x68, virtual false, abstract: false, final false
  inline void SetFloatImpl(int32_t name, float_t value);

  /// @brief Method SetFloatImpl_Injected, addr 0x685ab94, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatImpl_Injected(::System::IntPtr _unity_self, int32_t name, float_t value);

  /// @brief Method SetInt, addr 0x685bad8, size 0x30, virtual false, abstract: false, final false
  inline void SetInt(::StringW name, int32_t value);

  /// @brief Method SetInt, addr 0x685bc34, size 0x8, virtual false, abstract: false, final false
  inline void SetInt(int32_t nameID, int32_t value);

  /// @brief Method SetIntImpl, addr 0x685aa70, size 0x68, virtual false, abstract: false, final false
  inline void SetIntImpl(int32_t name, int32_t value);

  /// @brief Method SetIntImpl_Injected, addr 0x685aad8, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntImpl_Injected(::System::IntPtr _unity_self, int32_t name, int32_t value);

  /// @brief Method SetInteger, addr 0x685bc70, size 0x4, virtual false, abstract: false, final false
  inline void SetInteger(int32_t nameID, int32_t value);

  /// @brief Method SetMatrix, addr 0x685bd1c, size 0x4c, virtual false, abstract: false, final false
  inline void SetMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrix, addr 0x685bd68, size 0x2c, virtual false, abstract: false, final false
  inline void SetMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixArray, addr 0x685bf30, size 0x3c, virtual false, abstract: false, final false
  inline void SetMatrixArray(::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetMatrixArray, addr 0x685b908, size 0xbc, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method SetMatrixArray, addr 0x685bf6c, size 0x14, virtual false, abstract: false, final false
  inline void SetMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetMatrixArrayImpl, addr 0x685b524, size 0x108, virtual false, abstract: false, final false
  inline void SetMatrixArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values, int32_t count);

  /// @brief Method SetMatrixArrayImpl_Injected, addr 0x685b62c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetMatrixArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetMatrixImpl, addr 0x685ad70, size 0x68, virtual false, abstract: false, final false
  inline void SetMatrixImpl(int32_t name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetMatrixImpl_Injected, addr 0x685add8, size 0x54, virtual false, abstract: false, final false
  static inline void SetMatrixImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetRenderTextureImpl, addr 0x685af58, size 0xe8, virtual false, abstract: false, final false
  inline void SetRenderTextureImpl(int32_t name, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetRenderTextureImpl_Injected, addr 0x685b040, size 0x5c, virtual false, abstract: false, final false
  static inline void SetRenderTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x685bdc4, size 0x30, virtual false, abstract: false, final false
  inline void SetTexture(::StringW name, ::UnityEngine::Texture* value);

  /// @brief Method SetTexture, addr 0x685bdf8, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetTexture, addr 0x685bdf4, size 0x4, virtual false, abstract: false, final false
  inline void SetTexture(int32_t nameID, ::UnityEngine::Texture* value);

  /// @brief Method SetTextureImpl, addr 0x685ae2c, size 0xd8, virtual false, abstract: false, final false
  inline void SetTextureImpl(int32_t name, ::UnityEngine::Texture* value);

  /// @brief Method SetTextureImpl_Injected, addr 0x685af04, size 0x54, virtual false, abstract: false, final false
  static inline void SetTextureImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::System::IntPtr value);

  /// @brief Method SetVector, addr 0x685bc74, size 0x50, virtual false, abstract: false, final false
  inline void SetVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetVector, addr 0x685bcc4, size 0x4, virtual false, abstract: false, final false
  inline void SetVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetVectorArray, addr 0x685bee0, size 0x3c, virtual false, abstract: false, final false
  inline void SetVectorArray(::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetVectorArray, addr 0x685b84c, size 0xbc, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetVectorArray, addr 0x685bf1c, size 0x14, virtual false, abstract: false, final false
  inline void SetVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetVectorArrayImpl, addr 0x685b3c0, size 0x108, virtual false, abstract: false, final false
  inline void SetVectorArrayImpl(int32_t name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values, int32_t count);

  /// @brief Method SetVectorArrayImpl_Injected, addr 0x685b4c8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetVectorArrayImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values, int32_t count);

  /// @brief Method SetVectorImpl, addr 0x685abe8, size 0x70, virtual false, abstract: false, final false
  inline void SetVectorImpl(int32_t name, ::UnityEngine::Vector4 value);

  /// @brief Method SetVectorImpl_Injected, addr 0x685ac58, size 0x54, virtual false, abstract: false, final false
  static inline void SetVectorImpl_Injected(::System::IntPtr _unity_self, int32_t name, ::ByRef<::UnityEngine::Vector4> value);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x685b9c4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlock(MaterialPropertyBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlock(MaterialPropertyBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10131 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MaterialPropertyBlock, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::MaterialPropertyBlock, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MaterialPropertyBlock);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MaterialPropertyBlock*, "UnityEngine", "MaterialPropertyBlock");
NEED_NO_BOX(::UnityEngine::MaterialPropertyBlock_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MaterialPropertyBlock_BindingsMarshaller*, "UnityEngine", "MaterialPropertyBlock/BindingsMarshaller");
